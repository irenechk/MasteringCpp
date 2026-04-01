// using Logical operators
// && (AND), || (OR), ! (NOT)

//to reduce space and time complexity(i.e using less storage)instead f if-else loop we write in CONDITIONAL OPERATORS:
/* int a,b
condition ? statement_if_true : statement_if_false;
cout << (a > b ? a : b);
*/


#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int largest = (a > b && a > c) ? a : (b > c ? b : c);

    cout << "The largest number is: " << largest << endl;
    return 0;
}
