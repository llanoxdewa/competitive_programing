#include <iostream>
#include <string>
using namespace std;

int main(int arg,char* argv[]){
    string file = argv[1];
    string command = "python " + file;
    system(command.c_str());
	return 0;
}






