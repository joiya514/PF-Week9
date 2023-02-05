#include <iostream>
using namespace std;
main(){
	int n;
	int word[n];
	int number;
	cout << "Enter size of array: ";
	cin >> n;
	for(int x = 0; x < n; x++){
		cout << "Enter number" << x+1 <<": ";
		cin >> word[x];
	}
	cout << "Enter number to be multiplied: ";
	cin >> number;
	for(int x = 0; x < n; x++){
		cout << "product of number"<<x+1<<" is: " << word[x] * number << endl;
	}
}
