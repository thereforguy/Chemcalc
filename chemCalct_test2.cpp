/*	chemCalc back-end
	by InvisibleTree
	quick compile = g++ chemCalc.cpp -o chemCalc
	
	element data stored in elementData.txt
*/
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

struct element {																				//	Data structure for elements (read from txt file)
	int atomicNo;																				//	Atomic number variable (proton number)
	string symbol;																				//	Symbol variable (e.g. H)
	string name;																				//	Name variable (e.g. Hydrogen)
	float massNo;																				//	Mass number
}elementArray[128];

int main(int argc, char* argv[]){

	ifstream elementStream("elementData.txt");
	
	for(int i = 0; i < 128; i++){
		elementStream >> elementArray[i].atomicNo;												//	1 element = 1 line, all values on that line are assigned in order
		elementStream >> elementArray[i].symbol;												
		elementStream >> elementArray[i].name;
		elementStream >> elementArray[i].massNo;
		cout << elementArray[i].atomicNo << " " << elementArray[i].symbol						//	For test purposes, print everything on cmd-line
			 << " " << elementArray[i].name << " " << elementArray[i].massNo
			 << endl;
	}
	return 0;
}