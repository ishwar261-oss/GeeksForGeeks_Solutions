#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxSubarraySum(vector<int> &arr) {

        int currSum = arr[0];
        int maxSum = arr[0];

        for (int i = 1; i < arr.size(); i++) {

            currSum = max(arr[i], currSum + arr[i]);
            maxSum = max(maxSum, currSum);
        }

        return maxSum;
    }
};

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    Solution obj;

    cout << obj.maxSubarraySum(arr);

    return 0;
}