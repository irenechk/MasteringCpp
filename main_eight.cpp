// fibonacci series: 123=1+2=3;3+3=6
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int first = 0, second = 1, next;
    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
    };
    cout << endl;
    return 0;

    
}

