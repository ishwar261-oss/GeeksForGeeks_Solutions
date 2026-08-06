#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {

        int n = arr.size();
        vector<int> freq(n, 0);
        vector<int> ans;

        for (int x : arr)
            freq[x]++;

        for (int i = 0; i < n; i++) {
            if (freq[i] > 1)
                ans.push_back(i);
        }

        return ans;
    }
};
int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    Solution obj;

    if (obj.findDuplicates(arr))
        cout << "true";
    else
        cout << "false";

    return 0;
}