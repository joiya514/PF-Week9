#include <iostream>
using namespace std;
main(){
	int n;
	float array1[2];
	float array2[n];
	cout << "Enter two numbers for first array" << endl;
	cout << "Enter number: ";
	cin >> array1[0];
	cout << "Enter number: ";
	cin >> array1[1];
cout << "Enter size of second array: ";
cin >> n;
	for(int x = 0; x<n;x++){
  cout << "Enter number: ";
  cin >> array2[x];
}
cout << array1[0] << ", ";
for(int x = 0; x<n; x++){
  cout << array2[x] << ", ";
  }
  cout << array1[1];
	
}
