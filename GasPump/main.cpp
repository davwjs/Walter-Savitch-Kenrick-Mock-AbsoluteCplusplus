#include "gaspump.h"

int main()
{
    gaspump g;

    cout << "Welcome to gas station!" << endl;
    g.setpricepergallon(2.676);
    cout << "Gas price is $";
    g.displaycostpergallon();
    cout << " per gallon.\n";
    g.displaygasandcharges();
    
    char a;
    cout << "Press Y to start to dispense gas." << endl;
    cout << "Press Q to Exit." << endl;
    cin >> a;
    if(a == 'y' || a == 'Y')
        g.dispense();
    else if(a == 'Q' || a == 'q')
        g.stop();
    
    cout << "Thank you!!" << endl;
    cout << "Your charges are: " <<  endl;
    g.displaygasandcharges();

    return 0;
}




