#include <iostream>
#include <cmath>
using namespace std;

class PrimeNumber{
private:
    int num;
public:
    PrimeNumber(){
        num = 1;
    }
    PrimeNumber(int a){
        if(isPrime(a) != 0 && a>= 2)
            cout << "is not a prime.";
        else
            cout << "is a prime.";
        }
    int getNum(){
        return num;
    }
    static bool isPrime(int a){
        if (a == 2){
        return true;
        }
        if(a<2 || a%2 == 0){
            return false;
        }
        for (int i = 3; i <= sqrt(a); i += 2){
            if(a%i == 0){
                return false;
            }
        }
        return true;
    }
    friend PrimeNumber operator ++ (PrimeNumber &p, int dummy){
        while (isPrime(p.num) == true){
            ++p.num;
        }
        return p;
    }
    friend PrimeNumber operator -- (PrimeNumber &p, int dummy){
        while (isPrime(p.num) == true){
            --p.num;
        }
       return p;
    }
    friend int operator + (const PrimeNumber &S, const PrimeNumber &F){
        return (S.num + F.num);
    }
    friend int operator - (const PrimeNumber &S, const PrimeNumber &F){
        return (S.num - F.num);
    }
    friend ostream& operator << (ostream& os, const PrimeNumber& p) {
        os << p.num;
        return os;
    }
    friend istream& operator >> (istream& in, PrimeNumber& p) {
        in >> p.num;
        return in;
    }
};
