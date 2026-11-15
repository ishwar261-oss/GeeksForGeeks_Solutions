class Solution {
public:
    long long countConsistent(vector<int>& nums) {
        int n = nums.size();


        vector<int> left(n), right(n);
        vector<int> s;


        for(int i = 0; i < n; i++) {
            while(!s.empty() && nums[s.back()] > nums[i])
                s.pop_back();

            left[i] = s.empty() ? -1 : s.back();
            s.push_back(i);
        }

        s.clear();


        for(int i = n-1; i >= 0; i--) {
            while(!s.empty() && nums[s.back()] >= nums[i])
                s.pop_back();

            right[i] = s.empty() ? n : s.back();
            s.push_back(i);
        }

        vector<int> leftLim(n), rightLim(n);

        int lastZero[31];
        fill(lastZero, lastZero + 31, -1);

        for(int i = 0; i < n; i++) {
            leftLim[i] = 0;

            for(int b = 0; b < 31; b++) {
                if(nums[i] & (1 << b))
                    leftLim[i] = max(leftLim[i], lastZero[b] + 1);
            }

            for(int b = 0; b < 31; b++) {
                if(!(nums[i] & (1 << b)))
                    lastZero[b] = i;
            }
        }

        int nextZero[31];
        fill(nextZero, nextZero + 31, n);

        for(int i = n-1; i >= 0; i--) {
            rightLim[i] = n-1;

            for(int b = 0; b < 31; b++) {
                if(nums[i] & (1 << b))
                    rightLim[i] = min(rightLim[i], nextZero[b] - 1);
            }

            for(int b = 0; b < 31; b++) {
                if(!(nums[i] & (1 << b)))
                    nextZero[b] = i;
            }
        }

        long long ans = 0;

        for(int i = 0; i < n; i++) {
            int l = max(left[i] + 1, leftLim[i]);
            int r = min(right[i] - 1, rightLim[i]);

            long long leftC = i - l + 1;
            long long rightC = r - i + 1;

            ans += leftC * rightC;
        }

        return ans;
    }
};