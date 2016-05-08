#ifndef FUNCTION_H
#define FUNCTION_H

#include <iostream>
#include <string>

using namespace std;

string intToDec(int num, int size);
string stringToDec(string str, int size);
bool Asm(string str, string &oString);
bool regAsm(string str, string &oString);

#endif
