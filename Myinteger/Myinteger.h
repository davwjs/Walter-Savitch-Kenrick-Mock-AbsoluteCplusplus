/*DefineaclassnamedMyIntegerthatstoresanintegerandhasfunctionstogetand set the integer’s value. Then, overload the [] operator so that the index returns the digit in position i, where i = 0 is the least-significant digit. If no such digit exists then –1 should be returned.
 For example, if x is of type MyInteger and is set to 418, then x[0] should return 8, x[1] should return 1, x[2] should return 4, and x[3] should return –1.*/
#include <iostream>
using namespace std;

class Myinteger{
private:
    int num;
public:
    int getNum(){
        return num;
    }
    void setNum(int a){
        num = a;
    }
    friend ostream& operator << (ostream& os, const Myinteger& I){
        os << I.num;
        return os;
    }
    friend istream& operator >> (istream& in, Myinteger& I){
        in >> I.num;
        return in;
    }
    int operator [](int index){
        int temp = num;
        int digit = -1;
        int i;
        for(i = 0; i <= index; i++){
            digit = temp % 10;
            if(temp == 0)
                break;
            temp = temp /10;
        }
        if(i < index + 1)
            return -1;
        return digit;
    }
};
