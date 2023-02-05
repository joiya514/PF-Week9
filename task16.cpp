#include <iostream>
using namespace std;
main(){
	int n;
	int numbers[n];
	cout << "Enter size of array: ";
	cin >> n;
	for(int x = 0; x < n; x++){
		cout << "Enter number" << x+1<< ": ";
		cin >> numbers[x];
	}
	int number = numbers[0];
	for(int x = 1; x < n; x++){
		if(numbers[x] < number){
			number = numbers[x];
		}
	}
	cout << "Smallest is: " << number;
}
