#include <iostream>
using namespace std;

class Solution {
public:
    long long sumOfSeries(long long N) {
        return (N * (N + 1)) / 2;
    }
};

int main() {
    long long N;
    cin >> N;

    Solution obj;

    cout << obj.sumOfSeries(N);

    return 0;
}