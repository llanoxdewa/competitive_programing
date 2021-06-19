#include <iostream>
#include <chrono>
using namespace std;


int main(){
	auto t_start = chrono::high_resolution_clock::now();
	system("g++ -std=c++17 -Wall -O2 code.cpp -o code");		
	auto t_end = chrono::high_resolution_clock::now();
	double elapsed_time_ms = chrono::duration<double, milli>(t_end-t_start).count();
	cout << "compile done in " << elapsed_time_ms << "ms"<< endl;	
	return 0;
}




