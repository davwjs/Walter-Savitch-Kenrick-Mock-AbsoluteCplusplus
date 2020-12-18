#include "gaspump.h"

void gaspump::setpricepergallon(double gp)
{
    costpergallon = gp;
}

void gaspump::reset()
{
    dispensed = 0;
    charged = 0;
}

void gaspump::displaycostpergallon()
{
    cout <<  costpergallon;
}

void gaspump::displaygasandcharges()
{
    cout << "gallons: " << dispensed << "\tcharged: $" << charged << endl;
}
void gaspump::stop()
{
    displaygasandcharges();
}
void gaspump::dispense()
{
    char a;
    cout << "DISPENSING GAS" << endl;
    displaygasandcharges();
    cout << "Press Y to dispense in 1 gallon increments." << endl;
    cout << "Press Q to stop despensing." <<  endl;
    cin >> a;
    if(a == 'y' || a == 'Y'){
        charged += 1 * costpergallon;
        dispensed += 1;
        dispense();
    }
    else if(a == 'q' || a == 'Q')
        stop();
}

