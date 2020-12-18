#include <iostream>
using namespace std;

class Fraction {
private:
    int num = 0;
    int denom = 1;
    double result = 0;
public:
    //accessors
    int getNum();
    int getDenom();
    double getResult();
    //mutators
    void setNum(int);
    void setDenom(int);
    void setResult(int);
    //method to display
    void display();
    //method to read from keyboard
    void read();
    friend Fraction add(const Fraction &d1, const Fraction &d2);
    inline int GCF(int n, int d){
        int rem = n % d;
        while (rem != 0){
            n = d;
            d = rem;
            rem = n % d;
        }
        return d;
    }
    void reduce(){
        int g = GCF(num, denom);
        num /= g;
        denom /= g;
    }
    
};

