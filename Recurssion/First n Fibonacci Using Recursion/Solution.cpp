#include <iostream>
#include<vector>
using namespace std;

vector<int> fibonacciNumbers(int n) {
    if (n == 1)
        return {0};

    if (n == 2)
        return {0, 1};

    vector<int> ans = fibonacciNumbers(n - 1);

    ans.push_back(ans[ans.size() - 1] + ans[ans.size() - 2]);

    return ans;
}
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