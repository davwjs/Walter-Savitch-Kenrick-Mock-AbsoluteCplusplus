#include "Minmax.h"
void print(ostream &os, const Minmax &m) {
    os << "min: " << m.getMin() << "  max: " << m.getMax() << endl;
}
//overload <<
ostream& operator<< (ostream &os, const Minmax &m) {
    os << "min: " << m.getMin() << "  max: " << m.getMax() << endl;
    return os;
}
Minmax operator + (const Minmax &left, const Minmax &right){
    return Minmax(left.mMax + right.mMax, left .mMin + right. mMin);
}
Minmax operator * (const Minmax m, int a){
    if( a < 0){
        return Minmax(m.mMin * a, m.mMax * a);
    }
    return Minmax(m.mMax * a,m.mMin * a);
}
//prefix ++ increment then return //nothing on the left
Minmax operator ++ (Minmax &m){
    //increment m
    ++m.mMin;
    ++m.mMax;
    //return it
    return m;
}
//postfix remeber the old values, increment the object return old one
Minmax operator ++ (Minmax &M, int Dummy) {
    //save the old object
    Minmax temp(M);//copy constructor
    //increment M
    ++M.mMin;
    ++M.mMax;
    //return it
    return temp;
}
//Overload the operator [] to return mMax for[0](index 0)
//and mMin for index 1, it displays message “Code 20: out of bounds”
//if index is not 0 or 1.
//operator [] cannot be defined as friend, it has to be a member of the class

int Minmax::operator[](int ind) {
    if (ind == 0)
        return mMax;
    else if (ind == 1)
        return mMin;
    cout << "Out of bounds, invalid index \n";
    return 0;
}
