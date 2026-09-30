#include <iostream>
using namespace std;

void fib(int n, int a, int b) {
    if (n == 0)
        return;

    cout << a << " ";

    fib(n - 1, b, a + b);
}

void printFibb(int n) {
    fib(n, 1, 1);
}

int main() {
    int n = 3;
    int a = 5, b = 7;

    fib(n, a, b);

    return 0;
}