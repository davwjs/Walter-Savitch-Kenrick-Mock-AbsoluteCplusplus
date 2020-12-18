#include <iostream>
#include <cstring>
using namespace std;
class Ourstring {
private:
    char str[1024];
    int len;
public:
    //default constructor
    Ourstring() {
        str[0] = '\0';
        len = 0;
    }
    //constructor that accepts a constant string
    Ourstring(const char* s) {
        setStr(s);
    }
    //copy constructor
    Ourstring(Ourstring& s) {
        strcpy(str, s.cStr());
    }
    //accessors
    char* cStr(){
        return str;
    }
    int length() {
        return len;
    }
    //
    void setStr(const char* s) {
        strcpy(str, s);
        len = (int)strlen(str);
    }
    //overload <<  cout << OurString
    friend ostream& operator << (ostream& os, Ourstring s) {
        os << s.cStr();
        return os;
    }
    //overload >>
    friend istream& operator >> (istream& in, Ourstring& s) {
        in.getline(s.str, 1023);
        return in;
    }
    //+ s3 = s1 + s2
    friend Ourstring operator+ (Ourstring& s1, Ourstring& s2) {
        Ourstring result(s1.cStr());
        strcat(result.str, s2.str);
        result.len += strlen(s2.cStr());
        return result;
    }
    friend bool operator == (Ourstring s1, Ourstring s2){
        if(strcmp(s1.str, s2.str) == 0)
            return true;
        return false;
    }
    Ourstring operator = (Ourstring& s){
        (*this).setStr(s.cStr());
        return (*this);
    }
};
