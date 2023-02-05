#include <iostream>
using namespace std;
main(){
	int n;
	float number[n];
	float sum = 0;
	cout << "Enter number of resistors: ";
	cin >> n;
	for(int x = 0; x< n; x++){
		cout << "Enter resistance of resistor" << x+1 << ": ";
		cin >> number[x];
	}
	for(int x = 0; x<n; x++){
		sum = sum + number[x];
	}
	cout << "Resistance of all resitors is: " << sum << " ohms";
}
