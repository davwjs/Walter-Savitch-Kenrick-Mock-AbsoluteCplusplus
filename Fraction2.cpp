#include "Fraction.h"

int main(){
    Fraction First;
    First.read();
    First.display();
    cout << endl;
    Fraction Second;
    Second.read();
    Second.display();
    cout << endl;
    Fraction f3 = add(First, Second);
    cout << endl;
    return 0;
}
