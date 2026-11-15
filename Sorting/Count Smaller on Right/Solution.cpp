
class Solution {
  public:
    
    void merge(vector<int>& arr, vector<int>& idx,
               vector<int>& ans, int low, int mid, int high) {
        
        vector<int> temp;
        int i = low;
        int j = mid + 1;
        int rightCount = 0;
        
        while(i <= mid && j <= high) {
            
            if(arr[idx[j]] < arr[idx[i]]) {
                temp.push_back(idx[j]);
                rightCount++;
                j++;
            }
            else {
                ans[idx[i]] += rightCount;
                temp.push_back(idx[i]);
                i++;
            }
        }
        
        while(i <= mid) {
            ans[idx[i]] += rightCount;
            temp.push_back(idx[i]);
            i++;
        }
        
        while(j <= high) {
            temp.push_back(idx[j]);
            j++;
        }
        
        for(int k = low; k <= high; k++) {
            idx[k] = temp[k - low];
        }
    }
    
    void mergeSort(vector<int>& arr, vector<int>& idx,
                   vector<int>& ans, int low, int high) {
        
        if(low >= high) return;
        
        int mid = low + (high - low) / 2;
        
        mergeSort(arr, idx, ans, low, mid);
        mergeSort(arr, idx, ans, mid + 1, high);
        
        merge(arr, idx, ans, low, mid, high);
    }
    
    vector<int> lowerArray(vector<int> &arr) {
        
        int n = arr.size();
        
        vector<int> idx(n);
        vector<int> ans(n, 0);
        
        for(int i = 0; i < n; i++) {
            idx[i] = i;
        }
        
        mergeSort(arr, idx, ans, 0, n - 1);
        
        return ans;
    }
};
