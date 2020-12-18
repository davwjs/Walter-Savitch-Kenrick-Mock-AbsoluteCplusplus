#include "Myinteger.h"

int main(){
    Myinteger first;
    cout << "Enter a integer: ";
    cin >> first;
    cout << "The integer is: " << first << endl;
    cout << "Integer[0]: " << first[0] << endl;
    cout << "Integer[4]: " << first[4] << endl;
    cout << "Integer[3]: " << first[3] << endl;
    cout << "Integer[6]: " << first[6] << endl;
    cout << "Integer[2]: " << first[2] << endl;
    
    return 0;
}
