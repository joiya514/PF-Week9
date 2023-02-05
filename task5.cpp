#include <iostream>
using namespace std;
main(){
	string word;
	char letter;
	bool isfound = true;
	cout << "Enter word: ";
	cin >> word;
	cout << "Enter letter to check: ";
	cin >> letter;
	for(int x = 0; word[x] != '\0'; x++){
		if(word[x] == letter){
			isfound = true;
			break;
		}
		else{
			isfound = false;
		}
	}
	if(isfound == true){
		cout << "Letter is found in "<< word;
	}
		
			if(isfound == false){
				cout << "Letter is not found in "<< word;
}
}

