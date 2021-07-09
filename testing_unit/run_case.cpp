#include <iostream>
#include <windows.h>
#include <chrono>
using namespace std;


int main(int arg,char* argv[]){
    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    string sample = argv[1];
    string outcommand = "cat out/out"+sample;
    string expcommand = "cat expected/ex"+sample;
    string compare = "python testing_unit/compare.py "+sample;
    // color terminal
    auto t_start = chrono::high_resolution_clock::now();
    system(compare.c_str());
    auto t_end = chrono::high_resolution_clock::now();
    int elapsed_time_ms = chrono::duration<double, milli>(t_end-t_start).count() / 32;
    cout << "RUNING CASE#"+sample << endl;
    cout << "==============================" << endl;
    cout << "OUTPUT:" << endl;
    system(outcommand.c_str());
    cout << "EXPECTED:" << endl;
    system(expcommand.c_str());
    cout << "------------------------------" << endl;
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




