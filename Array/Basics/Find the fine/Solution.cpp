class Solution {
  public:
    long long int totalFine(int date, vector<int> &car, vector<int> &fine) {
           int ans = 0;
            int n = car.size();
                for (int i = 0; i < n; i++) {
                    if ((date % 2 == 0 && car[i] % 2 != 0) ||
                        (date % 2 != 0 && car[i] % 2 == 0)) {
                        ans += fine[i];
                    }
                }
                return ans;
    }
};