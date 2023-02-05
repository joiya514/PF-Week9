#include <iostream>
using namespace std;
main(){
	string input;
	string something = "something ";
	cout << "Enter argument: ";
	getline(cin, input);
	cout << something << input;
}
