#include <iostream>
using namespace std;
main(){
	float price;
	float money[4];
	bool isenough;
	for(int x = 0; x< 4; x++){
		cout << "Enter change: ";
		cin >> money[x];
	}
	cout << "Enter price of item: ";
	cin >> price;
	float available = (money[0] * 0.25) + (money[1] * 0.10) + (money[2] * 0.05) + (money[3] * 0.01);
	if(available >= price){
		isenough = true;
	}
	if(isenough == true){
		cout << "true";
	}
	else{
		cout << "false";
	}
}
