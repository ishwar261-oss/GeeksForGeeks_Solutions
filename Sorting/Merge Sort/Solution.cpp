class Solution {
  public:
    
    void merge(vector<int>& arr, int l, int m, int r) {
        vector<int> temp;
        
        int i = l;
        int j = m + 1;
        
        // Merge both sorted halves
        while (i <= m && j <= r) {
            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i]);
                i++;
            } else {
                temp.push_back(arr[j]);
                j++;
            }
        }
        
        // Remaining elements from left half
        while (i <= m) {
            temp.push_back(arr[i]);
            i++;
        }
        
        // Remaining elements from right half
        while (j <= r) {
            temp.push_back(arr[j]);
            j++;
        }
        
        // Copy back to original array
        for (int k = 0; k < temp.size(); k++) {
            arr[l + k] = temp[k];
        }
    }
    
    void mergeSort(vector<int>& arr, int l, int r) {
        if (l >= r)
            return;
        
        int m = l + (r - l) / 2;
        
        // Sort left half
        mergeSort(arr, l, m);
        
        // Sort right half
        mergeSort(arr, m + 1, r);
        
        // Merge both sorted halves
        merge(arr, l, m, r);
    }
};