#include <iostream>
using namespace std;

class gaspump
{
private:
    double dispensed = 0;
    double charged = 0;
    double costpergallon = 2.676;
public:
    void reset();
    void displaycostpergallon();
    void displaygasandcharges();
    void dispense();
    void stop();
    void setpricepergallon(double gp);
};
