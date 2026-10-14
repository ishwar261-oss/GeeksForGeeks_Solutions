
class Solution {
  public:
    bool checkSubsequenceSum(int n, vector<int>& arr, int k) {
        if (k == 0) return true;
        if (n == 0) return false;

        // Pick the current element
        if (arr[n - 1] <= k) {
            if (checkSubsequenceSum(n - 1, arr, k - arr[n - 1]))
                return true;
        }

        // Do not pick the current element
        return checkSubsequenceSum(n - 1, arr, k);
    }
};
