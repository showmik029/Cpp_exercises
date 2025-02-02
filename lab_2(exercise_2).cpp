#include <iostream>
#include <string>

using namespace std;

void replaceCharacter(string &str, char ch) {
    for (char &c : str) {
        if (c == ch) {
            c = '_';
        }
    }
}

int main() {
    string inputString;
    char replaceChar;
    string stop;

    while (true) {
        cout << "Enter a string: ";
        getline(cin, inputString);
        cout << "Enter character to replace or \"stop\": ";
        cin >> stop;
        if (stop == "stop") {
            break;
        }
        replaceChar = stop[0];
        replaceCharacter(inputString, replaceChar);
        cout << "Result: " << inputString << endl;
        cin.ignore();
    }

    return 0;

}

