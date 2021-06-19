#include <iostream>
#include <windows.h>
#include <chrono>
using namespace std;


int main(int arg,char* argv[]){
    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    string sample = argv[1];
    string command = "code < case/case"+sample;
    string compare = "python testing_unit/compare.py "+sample;
    // color terminal
    system(compare.c_str());
    cout << "RUNING CASE#"+sample << endl;
    cout << ".............................." << endl;
    auto t_start = chrono::high_resolution_clock::now();
    system(command.c_str());
    auto t_end = chrono::high_resolution_clock::now();
    int elapsed_time_ms = chrono::duration<double, milli>(t_end-t_start).count();
    cout << ".............................." << endl;
    cout << "testing code done in ";
    if(elapsed_time_ms > 1000){
        SetConsoleTextAttribute(hConsole, 246);
        cout << elapsed_time_ms / 1000 << "s" << endl;
        cout << "WARNING: " << "time limit 1s !!!" << endl;
    }
    else{
        cout << elapsed_time_ms << "ms" << endl;
    }
    return 0;
}




