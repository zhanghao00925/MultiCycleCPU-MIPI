#include <fstream>
#include "function.h"

int main(int argc, char * argv[]) {
    int count = 1;
    int breakpoint;
    string str;
    string oString;
    ifstream ifs(argv[1]);
    ofstream ofs(argv[2]);
    while (!ifs.eof()) {
    getline(ifs, str);
    cout << str << endl;
    if (Asm(str, oString)) {
        ofs << oString << endl;
    }
    else {
        cout << "WRONG: INVAILD OPERATOR AT LINE " << count << endl;
        return 1;
    }
        count++;
    }
    ifs.close();
    ofs.close();
    return 0;
}
