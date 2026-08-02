#include <iostream>
using namespace std;

class Solution {
public:
    int countWays(int n) {

        if (n == 0 || n == 1)
            return 1;

        int prev2 = 1;
        int prev1 = 1;

        for (int i = 2; i <= n; i++) {
            int curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
};

int main() {

    int n;
    cin >> n;

    Solution obj;
    cout << obj.countWays(n);
    return 0;
}