#include <iostream>
using namespace std;
main(){
	int n;
	cout << "Enter size of array: ";
	cin >> n;
int numbers[n];
for(int x =0; x < n; x++)
{
	cout << "Enter number: ";
	cin >> numbers[x];
}
for(int x =0; x < n; x++)
{
	cout << numbers[x] << endl;
}

}
