#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string fileData;
    ifstream file("file.txt");

    if (file.is_open()) {
        getline(file, fileData);
        file.close();

        int vowelCount = 0;
        int wordCount = 0;

        for (char ch : fileData) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowelCount++;
            }

            if (isspace(ch)) {
                wordCount++;
            }
        }

        cout << "Number of vowels: " << vowelCount << endl;
        cout << "Number of words: " << wordCount + 1 << endl;

        string reversedStatement(fileData.rbegin(), fileData.rend());
        cout << "Reversed statement: " << reversedStatement << endl;

        for (int i = 0; i < fileData.size(); ++i) {
            if (i % 2 == 1) {
                fileData[i] = toupper(fileData[i]);
            }
        }
        cout << "Capitalized second letter: " << fileData << endl;
    } else {
        cerr << "Unable to open file." << endl;
    }

    return 0;
}