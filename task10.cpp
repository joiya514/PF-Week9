#include <iostream>
using namespace std;
main(){
	string abc = "abcdefghijklmnopqrstuvwxyz";
	string word;
	char letter;

	cout << "Enter word: ";
	cin >> word;
	for(int x = 0; word[x] != '\0'; x++){
	for(int y = 0; abc[y] != '\0'; y++){
		if(word[x] == abc[y]){
			letter = abc[y+1];
			cout << letter;
		}
			
	}
	}
}
