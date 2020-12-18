#include "Fraction.h"

Fraction add(const Fraction &d1, const Fraction &d2){
    Fraction result;
    if(d1.denom == d2.denom){
        cout << (d1.num + d2.num) << "/" << d1.denom;
        if((d1.num + d2.num) == d1.denom)
            cout << " = 1" << endl;
    }
    else{
        cout << ((d1.num * d2.denom) + (d2.num * d1.denom)) << "/" << (d1.denom * d2.denom);
        if(((d1.num * d2.denom) + (d2.num * d1.denom)) == (d1.denom * d2.denom))
            cout << " = 1" << endl;
    }
    
    return result;
}
