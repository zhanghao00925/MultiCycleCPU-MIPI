#include <sstream>
#include <vector>
#include "function.h"

bool regAsm(string str, string &oString) {
    int num;
    stringstream ss;
    ss << str.substr(1, str.size() - 1);
    ss >> num;
    if (num < 0 || num > 31) {
        return false;
    }
    else {
        oString = intToDec(num, 5);
        return true;
    }
}

string stringToDec(string str, int size) {
    int num;
    stringstream ss;
    ss << str;
    ss >> num;
    string oString = intToDec(num, size);
    return oString;
}

string intToDec(int num, int size) {
    string oString = "";
    string temp = "";
    bool neg = false;
    if (num < 0) {
        neg = true;
        num = -num - 1;
    }
    while (num / 2 > 0) {
        if (num % 2 == 1)
            temp += "1";
        else
            temp += "0";
    }
    if (num % 2 == 1)
        temp += "1";
    else
        temp += "0";
    for (int i = 0; i < size - temp.size(); i++) {
        oString += "0";
    }
    for (int i = temp.size() - 1; i >= 0; i--) {
        oString += temp[i];
    }
    if (neg) {
        for (int i = 0; i < oString.size(); i++) {
            if (oString[i] == '1')
            oString[i] = '0';
            else
            oString[i] = '1';
        }
    }
    return oString;
}

bool Asm(string str, string &oString) {
    string temp;
    vector<string> list;
    stringstream ss;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ',' || str[i] == '(' || str[i] == ')') {
            str[i] = ' ';
        }
    }
    ss << str;
    while (ss >> temp) {
        list.push_back(temp);
    }
    if (list.size() != 0 ) {
        if (list[0] == "add" || list[0] == "sub" || list[0] == "and" ||
            list[0] == "or" || list[0] == "sll" || list[0] == "slt") {
            if (list.size() != 4)
                return false;
            if (list[0] == "add")
                oString = "000000";
            else if (list[0] == "sub")
                oString = "000001";
            else if (list[0] == "or")
                oString = "010000";
            else if (list[0] == "and")
                oString = "010001";
            else if (list[0] ==  "sll")
                oString = "011000";
            else
                oString = "100111";
            if (regAsm(list[2], temp))
                oString += temp;
            else
                return false;
            if (regAsm(list[3], temp))
                oString += temp;
            else
                return false;
            if (regAsm(list[1], temp))
                oString += temp;
            else
                return false;
            oString += "00000000000";
        }
        else if (list[0] == "addi" || list[0] == "ori") {
            if (list.size() != 4)
                return false;
            if (list[0] == "addi")
                oString = "000010";
            else
                oString = "010010";
            if (regAsm(list[2], temp))
                oString += temp;
            else
                return false;
            if (regAsm(list[1], temp))
                oString += temp;
            else
                return false;
            oString += stringToDec(list[3], 16);
        }
        else if (list[0] == "move") {
            if (list.size() != 3)
                return false;
            if (regAsm(list[2], temp))
                oString += temp;
            else
                return false;
                oString += "00000";
            if (regAsm(list[1], temp))
                oString += temp;
            else
                return false;
            oString += "0000000000";
        }
        else if (list[0] == "sw" || list[0] == "lw"){
            if (list.size() != 4)
                return false;
            if (list[0] == "sw")
                oString = "110000";
            else
                oString = "110001";
            if (regAsm(list[3], temp))
                oString += temp;
            else
                return false;
            if (regAsm(list[1], temp))
                oString += temp;
            else
                return false;
            oString += stringToDec(list[2], 16);
        }
        else if (list[0] == "beq") {
            if (list.size() != 4)
                return false;
            oString = "110100";
            for (int i = 1; i < 3; i++) {
                if (regAsm(list[i], temp))
                    oString += temp;
                else
                    return false;
            }
            oString += stringToDec(list[3], 16);
        }
        else if (list[0] == "jr") {
            if (list.size() != 2)
                return false;
            if (regAsm(list[1], temp))
                oString = "111001" + temp + "00000000000";
            else
                return false;
        }
        else if (list[0] == "jal" || "j") {
            if (list.size() != 2)
                return false;
            temp = stringToDec(list[1], 26);
            if (list[0] == "j")
                oString = "111000";
            else
                oString = "111010";
            oString += temp;
        }
        else if (list[0] == "halt") {
            if (list.size() != 1)
                return false;
            oString = "11111100000000000000000000000000";
        }
        else {
            return false;
        }
        return true;
    }
}
