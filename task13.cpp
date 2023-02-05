#include <iostream>
using namespace std;
main(){
	int n;
	int numbers[n];
	int number;
	cout << "Enter size of array: ";
	cin >> n;
	for(int x = 0; x < n; x++){
		cout << "Enter number" << x+1 << ": ";
		cin >> numbers[x];
	}
	cout << "Enter number to be compared with previous numbers: ";
	cin >> number;
	int sum = 0;
	for(int x = 0; x < n; x++){
		if(number == numbers[x]){
			sum = sum + 1;
		}
	}
	for(int x = 0; x < n; x++){
		if(number != numbers[x]){
		sum;
}
}
if(sum != 0){
	cout << "Already entered!";
}
if(sum == 0){
	cout << "Not entered!";
}

}
