#include <iostream>
using namespace std;
main()
{
    int numbers[5];
    for(int x = 0; x < 5; x++){
        cout << "Enter number: ";
        cin >> numbers[x];
    }
    cout << numbers[1] << endl;
    cout << numbers[3];
}
