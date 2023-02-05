#include <iostream>
using namespace std;
main(){
	string vowels;
	cout << "Enter a string to remove vowels: ";
	getline(cin, vowels);
	for(int x = 0; vowels[x] != '\0'; x++){
		if(vowels[x] == 'a' || vowels[x] == 'o' || vowels[x] == 'i' || vowels[x] == 'e' || vowels[x] == 'u'){
			continue;
		}
		cout << vowels[x];
}
}
