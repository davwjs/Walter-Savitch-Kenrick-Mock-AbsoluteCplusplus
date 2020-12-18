#include "Minmax.h"
extern void print(ostream &os, const Minmax &m);
ostream & operator<< (ostream &os, const Minmax &m);
int main() {
    //create a default MinMax
    Minmax myNum;
    //display it
    print(cout, myNum);
    cout << endl;
    cout << "My object is: " << myNum << endl;
    //set min to -3 max 4
    myNum.setMinMax(-3, 4);
    //display it
    print(cout, myNum);
    //reset min to 9
    myNum.setMin(9);
    //display it
    print(cout, myNum);
    //reset Max to 2
    myNum.setMax(2);
    //display it
    print(cout, myNum);
    //create a MinMax where min is 1 and max is 5
    Minmax yournum(1, 5);
    //display it.
    cout << "Your num is: " << yournum << endl;
    //create hisNum that is the sum of myNum and yourNum
    Minmax hisnum = myNum + yournum;
    cout << "Plus: " << hisnum << endl;
    //How are you going to use the operator * defined above?
    Minmax somename = hisnum * -4;
    cout << "someName = " << somename << endl;
    //using prefix incerement
    hisnum = ++yournum;
    cout << "hisNum = " << hisnum << "  YourNum = " << yournum << endl;
    //postfix hisNum(2, 6)
    somename = hisnum++;//someName = (2, 6) hisNum = (3, 7)
    cout << "hisNum = " << hisnum << "  someName = " << somename << endl;
    //using [] operator
    int var = somename[0]; //this should return mMax in var
    cout << "var = " << var << endl;
    var = somename[2]; //display a message out of bounds
    return 0;
}
