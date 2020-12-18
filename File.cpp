/*Input files are files from which you can read. the file exists.
 Output files are files to which you can write
 1- Create a handle to a file (ifstream for input files,
 ofstream output files stream)
 2- open the file
 3- make sure the file is opened
 4- use the file (read or write to it)
 5- close the file.
 */
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    //create an output file
    ofstream myFile;
    char fileName[128] = "C:\\test.txt";
    //open the file
    myFile.open(fileName);
    //make sure the file is open
    if (!myFile.is_open()) {
        cout << "Cannot open file " << fileName << endl;
        return 0;
    }
    //use the file
    myFile << "This is the first line \n";
    myFile << "This is the second line \n";
    myFile << "\n";
    myFile << "The previous line was empty";
    //close the file
    myFile.close();
    //Now let's create an input file (test.txt) and read
    //the lines
    //create ifstream
    ifstream inFile;
    //open the file
    inFile.open(fileName);
    //make sure it is open
    if (!inFile.is_open()) {
        cout << "Cannot open file " << fileName << endl;
        return 0;
    }
    //use the file (inFile behaves like cin
    cout << "------Reading from file ----- \n";
    string line;
    while (!inFile.eof()) {
        getline(inFile, line);
        cout << "line: " << line << endl;
    }
    inFile.close();
    return 0;
}
