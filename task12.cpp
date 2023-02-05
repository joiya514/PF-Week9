#include <iostream>
using namespace std;
main(){
	int n;
	int numbers[n];
	cout << "Enter size of array: ";
	cin >> n;
	for(int x = 0; x < n; x++){
		cout << "Enter number" << x+1 << ": ";
		cin >> numbers[x];
	}
	for(int x = n-1; x >= 0; x--){
		cout << numbers[x] << endl;
}
}
