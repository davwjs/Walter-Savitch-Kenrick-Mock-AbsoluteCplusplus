#include <iostream>
using namespace std;
#pragma once

class Minmax {
private:
    int mMin;
    int mMax;
public:
    //constructors later
    Minmax() {
        setMinMax(0, 0);
    }
    Minmax(int a, int b) {
        setMinMax(a, b);
    }
    //getters
    int getMin() const{
        return mMin;
    }
    int getMax() const{
        return mMax;
    }
    //setters
    void setMinMax(int a, int b) {
        if (a < b) {
            cout << "Code 10: Invalid inputs, Max smaller than Min \n";
            mMin = a;
            mMax = b;
        }
        else {
            mMin = b;
            mMax = a;
        }
    }
    //setMin (int a) if a is greater than Max then
    void setMin(int a) {
        if (a > mMax) {
            //Max should be a and mMin should be the old max
            mMin = mMax;
            mMax = a;
        }
        else
            mMin = a;
    }
    void setMax(int a) {
        if (a < mMin) {
            mMax = mMin;
            mMin = a;
        }
        else
            mMax = a;
    }
    friend ostream& operator<< (ostream &os, const Minmax &m);
    friend Minmax operator + (const Minmax &left, const Minmax &right);
    friend Minmax operator* (const Minmax m, int a);
    friend Minmax operator ++ (Minmax &m);
    friend Minmax operator ++ (Minmax &M, int Dummy);
    int operator[](int ind);
};
