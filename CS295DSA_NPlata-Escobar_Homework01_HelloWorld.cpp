/*	CS 295 Data Structures and Algorithms
	First assignment: setting up Visual Studio and writing a simple program.
	@author: Nicolas Plata-Escobar.
	@version: 1. May 21, 2019.
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Hello World!\n" << endl;
	cout << "Double ENTER to Exit." << endl;
	string exit;
	getline(cin, exit);
	getline(cin, exit);
	return 0;
}