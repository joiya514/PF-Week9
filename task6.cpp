#include <iostream>
using namespace std;
main(){
	string word;
	
	cout << "Enter word: ";
	cin >> word;
	for(int x = 0; word[x] != '\0'; x++){
		cout << x + 1 << ": " << word[x] << endl;
	}
}
