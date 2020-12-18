#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "The string before it changed: " << endl;
    cout << str << endl;
    cout << "The string after it changed: " <<  endl;
    
    int len = str.length();
    int countwords = 0;
    int countletters[128];
    for (int i = 0; i < 128; i++){
        countletters[i] = 0;
    }
    for (int i = 0; i < len; i++){
        while(i < len && isalpha(str[i]) && !ispunct(str[i])){
            countletters[(int)str[i]]++;
            i++;
        }
        countwords++;
        if(countwords == 4){
            cout << str.replace(countwords,4, "love");
        }
    }
    
    return 0;
}
