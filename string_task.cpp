#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string processString(const string& inputString) {
    string vowels = "AEIOUYaeiouy";
    string consonants = "BCDFGHJKLMNPQRSTVWXZbcdfghjklmnpqrstvwxz";
    string result;
    for (char ch : inputString) {
        if (vowels.find(ch) != string::npos) {
            continue;
        } else if (consonants.find(ch) != string::npos) {
            result += "." + string(1, tolower(ch));
        } else {
            result += string(1, tolower(ch));
        }
    }
    return result;
}

int main() {
    string inputString;
    cin >> inputString;
    string outputString = processString(inputString);
    cout << outputString << endl;
    return 0;
}
