#include "Fraction.h"
int Fraction::getNum(){
    return num;
}
int Fraction::getDenom(){
    return denom;
}
void Fraction::setNum(int n){
    if (num == 0){
        cout << "0" << endl;
        return;
    }
    num = n;
}
void Fraction::setDenom(int d){
    if (denom == 0){
        cout << "0" << endl;
        return;
    }
    denom = d;
}
void Fraction::setResult(int r){
    result = r;
}
void Fraction::display(){
    if (denom == 1) {
        cout << num << endl;
    }
    else if (num == denom){
        cout << "1" << endl;
    }
    else {
        cout << num << "/" << denom << endl;
    }
}
void Fraction::read(){
    cout << "Enter fraction in form a/b: ";
    char temp;
    cin >> num >> temp >> denom;
}
void Fraction::add(Fraction d1, Fraction d2){
    cout << "The sum of the fraction is: ";
    if(d1.getDenom() == d2.getDenom()){
        cout << (d1.getNum() + d2.getNum()) << "/" << getDenom();
        if((d1.getNum() + d2.getNum()) == getDenom())
            cout << " = 1" << endl;
    }
    else{
        cout << ((d1.getNum() * d2.getDenom()) + (d2.getNum() * d1.getDenom())) << "/" << (d1.getDenom() * d2.getDenom());
        if(((d1.getNum() * d2.getDenom()) + (d2.getNum() * d1.getDenom())) == (d1.getDenom() * d2.getDenom()))
            cout << " = 1" << endl;
    }
}
