#include <iostream>
using namespace std;
main(){
	string word;
	int sum = 0;
	
	cout << "Enter word: ";
	cin >> word;
	for(int x = 0; word[x] != '\0'; x++){
		sum = sum + 1;
	}
	if(sum % 2 == 0){
		cout << word << " is even.";
	}
	if(sum % 2 != 0){
		cout << word << " is odd.";
	}
}
