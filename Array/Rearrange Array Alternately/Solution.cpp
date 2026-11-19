
class Solution {
  public:
    void rearrange(vector<int>& arr) {
        int n = arr.size();

        sort(arr.begin(), arr.end());

        int maxIdx = n - 1;
        int minIdx = 0;

        int maxVal = arr[n - 1] + 1;

        for(int i = 0; i < n; i++) {
            if(i % 2 == 0) {
                arr[i] += (arr[maxIdx] % maxVal) * maxVal;
                maxIdx--;
            }
            else {
                arr[i] += (arr[minIdx] % maxVal) * maxVal;
                minIdx++;
            }
        }

        for(int i = 0; i < n; i++) {
            arr[i] /= maxVal;
        }
    }
};
