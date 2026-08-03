#include <iostream>
using namespace std;

class Solution {
public:
    long long factorial(int n) {

        long long fact = 1;

        for (int i = 1; i <= n; i++)
            fact *= i;

        return fact;
    }
};

int main() {

    int n;
    cin >> n;

    Solution obj;

    cout << obj.factorial(n);

    return 0;
}