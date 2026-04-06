// counting vowels and consonents using switch case

#include <iostream>
using namespace std;

int main() {
    char a;
    cout << "Enter a character: ";
    cin >> a;

    switch (a) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            cout << a << " is a vowel." << endl;
            break;
        default:
            cout << a << " is a consonant." << endl;
    }
    return 0;
}
        