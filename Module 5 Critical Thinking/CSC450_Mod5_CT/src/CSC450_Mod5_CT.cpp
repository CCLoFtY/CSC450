#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    string userInput;

    cout << "Enter text to append to the file: ";
    getline(cin, userInput);

    // Append user input
    ofstream outFile("CSC450_CT5_mod5.txt", ios::app);

    if (!outFile) {
        cout << "Error opening file." << endl;
        return 1;
    }

    outFile << userInput << endl;
    outFile.close();

    // Read original file
    ifstream inFile("CSC450_CT5_mod5.txt");

    if (!inFile) {
        cout << "Error reading file." << endl;
        return 1;
    }

    string fileContents;
    string line;

    while (getline(inFile, line)) {
        fileContents += line + "\n";
    }

    inFile.close();

    // Reverse contents
    reverse(fileContents.begin(), fileContents.end());

    // Write reversed file
    ofstream reverseFile("CSC450-mod5-reverse.txt");

    if (!reverseFile) {
        cout << "Error creating reverse file." << endl;
        return 1;
    }

    reverseFile << fileContents;
    reverseFile.close();

    cout << "Data appended and reverse file created successfully." << endl;

    return 0;
}
