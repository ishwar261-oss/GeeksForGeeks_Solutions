#include<iostream>
#include<vector>
    using namespace std;
class Solution {
  public:
    int firstSearch(vector<int> &arr, int k) {
        int n = arr.size();
        for(int i = 0; i < n; i+=1){
            if(arr[i] == k)
                return i;
        }
        return -1;
        
    }

    int firstOccurrence(vector<int>& arr, int x) {

        int start = 0;
        int end = arr.size() - 1;

        int ans = -1;

        while (start <= end) {

            int mid = start + (end - start) / 2;

            if (arr[mid] == x) {

                ans = mid;

               end = mid - 1;
            }
            else if (arr[mid] < x) {

                start = mid + 1;
            }
            else {

                end = mid - 1;
            }
        }

        return ans;
    }
};

    int main(){

  vector<int> vec;
  

        cout<<"Enter 5 Vector Elements : ";

        int ele;
    for(int i = 0; i < 5; i++){
        cin >> ele;
        vec.push_back(ele);
    }

       cout<< "\nVector Elements : ";

    for(int ele : vec){     
        cout<<ele<<" ";
    }

    cout<<"\nEnter Element To Scearch In Vector : ";
    int key;
    cin>>key;

    Solution obj;
    int ans = obj.firstSearch(vec, key);

    if(ans != -1)
        cout<<"\nElement Found At Position : "<<ans;
    else   cout<<"\n Element Not Found..";

        return 0;
    }