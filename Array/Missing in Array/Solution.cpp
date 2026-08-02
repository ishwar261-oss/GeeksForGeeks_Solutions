#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNum(vector<int>& arr) {

          int n = arr.size() + 1;
        int ans = 0;

        for (int i = 1; i <= n; i++)
            ans ^= i;

        for (int num : arr)
            ans ^= num;

        return ans;
    }
};

int main() {

    int n;
    cin >> n;

    vector<int> arr(n - 1);

    for (int i = 0; i < n - 1; i++)
        cin >> arr[i];

    Solution obj;

    cout << obj.missingNum(arr);

    return 0;
}