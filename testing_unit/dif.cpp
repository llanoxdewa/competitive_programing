#include <iostream>

using namespace std;


int main(int arg,char* argv[]){
	string file = argv[1];	
	string execute = "diff -p out/out"+file+" expected/ex"+file+" > dif_file/dif-case-"+file;
	system(execute.c_str());
	return 0;
}









