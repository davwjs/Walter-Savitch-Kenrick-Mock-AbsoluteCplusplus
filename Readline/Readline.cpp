#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1;
    
    cout << "Enter a string: ";
    getline(cin, str1);
    int len = str1.length();
    // a counter for words
    int countwords = 0;
    // counters for letters
    int countletters[128];
    //initialize the counts to 0
    for (int i = 0; i < 128; i++){
        countletters[i] = 0;
    }
    for (int i = 0; i < len; i++){
        while(i < len && isalpha(str1[i]) && !ispunct(str1[i])){
            //increment the count for the character
            countletters[(int)str1[i]]++;
            i++;
        }
        //increase the count of words because we reached the end of the word
        countwords++;
    }
    cout << "The number of words: " << countwords << endl;
    for (int i = 0; i < 128; i++){
        if(countletters[i] > 0){
            cout << (char) i << " " << countletters[i] <<  endl;
        }
    }
    
    return 0;
}
