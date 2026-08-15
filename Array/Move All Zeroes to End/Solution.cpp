
class Solution {
  public:
      void pushZerosToEnd(vector<int>& arr) {
          int index = 0;

          for (int i = 0; i < arr.size(); i++) {
              if (arr[i] != 0) {
                  arr[index] = arr[i];
                  index++;
              }
          }
          while (index < arr.size()) {
              arr[index] = 0;
              index++;
          }
      }
  };