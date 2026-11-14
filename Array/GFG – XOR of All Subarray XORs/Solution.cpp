class Solution {
public:
    int subarrayXor(vector<int>& arr) {
        int n = arr.size();

        if(n % 2 == 0) return 0;

        int ans = 0;

        for(int i = 0; i < n; i++) {
            ans ^= arr[i];
        }

        return ans;
    }
};class Solution {
  public:
    int subarrayXor(vector<int>& arr) {
        // code here
        int n=arr.size(),ans=0;

               for(int i=0;i<n;i++){
                   if((i)%2 or (n-i-1)%2) continue;
                   ans^=arr[i];
               }

               return ans;
    }
};