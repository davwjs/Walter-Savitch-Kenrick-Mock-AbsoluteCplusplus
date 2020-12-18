#include "ReplaceString.h"

int main(){
    char ans;
    string sentence, input;
    do
    {
        cout << "Enter  the sentence that to be train" << endl;
        getline(cin, input);
        sentence = gendernatrual(input);
        cout << "Gender sentence is: " <<  endl;
        cout << sentence << endl;
        cout << "Do you want enter another sentence? Press y to proceed.";
        cin >> ans;
        cin.ignore(1000);
    }
    while (ans == 'Y' || ans == 'y');
    {
        cin.get();
        return 0;
        system("pause");
    }
    
}
