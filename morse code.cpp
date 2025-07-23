#include <iostream>
#include <map>
#include <cctype> // for toupper and isalpha
using namespace std;

// Morse code mappings for each letter (A-Z)
map<char, string> morseCode = {
    {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."},
    {'F', "..-."}, {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"},
    {'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."}, {'O', "---"},
    {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
    {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, {'Y', "-.--"},
    {'Z', "--.."}
};

// Function to convert a text string into Morse code
void textToMorse(const string& text) {
    for (char c : text) {
        // Convert to uppercase if the character is a letter
        if (isalpha(c)) {
            c = toupper(c);
            cout << morseCode[c] << " ";
        } else if (c == ' ') {
            cout << " "; // Extra space between words
        }
    }
    cout << endl;
}

int main() {
    string text;

    cout << "Enter a text to convert to Morse code (A-Z only): ";
    getline(cin, text);

    cout << "Morse Code: ";
    textToMorse(text);

    return 0;
}
