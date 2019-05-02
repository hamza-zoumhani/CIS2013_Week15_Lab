#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream myfile("example.txt");
	string line;
	
	if(myfile.is_open() ){
		myfile <<"This is a line of stuff" << endl;
		myfile <<"This will appear in the same line" << endl;
		myfile <<"This should not" << endl;
		myfile.close();
	}else{
		cout << "Unable to open the file!";
	}
	
	ifstream myOutFile("example.txt");
	if (myOutFile.is_open() ){
		while (getline(myOutFile,line) ){
			cout << line << endl;
		}
		myOutFile.close();
	}else{
		cout << "Unable to open the file!";
	}
	
	return 0;
}