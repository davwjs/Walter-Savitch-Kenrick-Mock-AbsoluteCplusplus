#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char mystr[21];
    strcpy(mystr, "Hi there");
    cout << "mystr = " << mystr << endl;
    cout << "First char is: " << mystr[0] << endl;
    cout << "Last char is: " << mystr[7] << endl;
    cout << "8th char is: " << mystr[8] << endl;
    cout << "9th char is: " << mystr[9] << endl;
    strcpy(mystr, "I like c++ it is fun");
    cout << "mystr = " << mystr << endl;
    char mystr1[21];
    strcpy(mystr1, "I like c++");
    cout << "mystr = " << mystr1 << endl;
    if(mystr == mystr1){
        cout << "Two strings are same." << endl;
    }
    else{
        cout << "Two strings are different." << endl;
    }
    char mystr2[100];
    cin.getline(mystr2, 100);
    cout << mystr2 << endl;
    
    char str[] = "dlbczcbld";
    if(isPalindrome(str)){
        cout << "is palindrome." << endl;
    }
    else
        cout << "is not a palindrome." << endl;
    return 0;
}
bool isPalindrome(char str[]){
    int i = 0, j = strlen(str) - 1;
    while (i <= j){
        if(str[i] != str[j])
            return false;
    }
    return true;
}


