#include <iostream>
using namespace std;
main(){
	string word;
	bool issame;
	char letter;
	cout << "Enter word: ";
	cin >> word;
	cout << "Enter letter: ";
	cin >> letter;
	int sum = 0;
	for(int x = 0; word[x] != '\0'; x++){
     sum = sum + 1;
	}
	if(word[sum - 1] == letter)
	{
		issame = true;
	}
	else{
		issame = false;
	}
	if(issame == true){
	  cout << "true";
	}
	else{
		cout << "false";
	}
}
