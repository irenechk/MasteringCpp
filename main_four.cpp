// example program: string operator demonstration
#include <iostream>
#include <string>

using namespace std;

int main() {

    string s1 = "Hello";
    string s2 = "World!";
    string s3;

    // using concatenation +
    s3 = s1 + " " + s2;
    cout << "Concatenated string: " << s3 << endl;

    // using append / += operator
    s1 += s2;
    cout << "After += operator: " << s1 << endl;

    // comparison using == operator
    if (s1 == s3) {
        cout << "s1 and s3 are equal." << endl;
    } else {
        cout << "s1 and s3 are not equal." << endl;
    }

    // comparison using relational operators
    //Relational operators are used to compare two values and return a true or false result.
    if (s1 < s2) {
        cout << "s1 is less than s2." << endl;
    } else if (s1 > s2) {
        cout << "s1 is greater than s2." << endl;
    } else {
        cout << "s1 is equal to s2." << endl;
    }

    return 0;
}