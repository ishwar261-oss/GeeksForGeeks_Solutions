class Solution {
public:
    int findMinDiff(vector<int>& a, int m) {
        int n = a.size();

        if (m > n)
            return -1;

        sort(a.begin(), a.end());

        int ans = INT_MAX;

        for (int i = 0; i + m - 1 < n; i++) {
            int diff = a[i + m - 1] - a[i];
            ans = min(ans, diff);
        }

        return ans;
    }
};