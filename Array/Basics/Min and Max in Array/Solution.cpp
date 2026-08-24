class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        int max = INT_MIN;
        int min = INT_MAX;
        
        for(int x : arr){
            if(x > max) max = x;
            if(x < min) min = x;
        }
        
        return{min,max};
    }
};