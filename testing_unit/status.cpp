#include <iostream>
#include <windows.h>
using namespace std;


int main(int arg,char* argv[]){
    string status = argv[1];
    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    if(status == "succes"){
        SetConsoleTextAttribute(hConsole, 250);
    } else if(status == "failed"){
        SetConsoleTextAttribute(hConsole,252);
    } else if(status == "warning"){
        SetConsoleTextAttribute(hConsole,254);
    }
    return 0;
}




