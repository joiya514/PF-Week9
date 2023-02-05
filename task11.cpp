#include <iostream>
using namespace std;
main(){
	int sum = 0;
	string word;
	cout << "Enter word: ";
	cin >> word;
	for(int x = 0; word[x] != '\0'; x++){
     if(word[x] == 'a'|| word[x] == 'e' || word[x] == 'i' || word[x] == 'o' || word[x] == 'u'){
     	sum = sum + 1;
	 }
	}
	cout << sum;
}
