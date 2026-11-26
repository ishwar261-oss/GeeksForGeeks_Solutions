 
class Solution {
public:
    long long jumpingNums(long long n) {
        long long ans = 0;
        queue<long long> q;

        for (int i = 1; i <= 9; i++) {
            q.push(i);
        }

        while (!q.empty()) {
            long long num = q.front();
            q.pop();

            if (num > n) continue;

            ans = max(ans, num);

            int last = num % 10;

            if (last > 0) {
                long long next = num * 10 + (last - 1);

                if (next <= n)
                    q.push(next);
            }

            if (last < 9) {
                long long next = num * 10 + (last + 1);

                if (next <= n)
                    q.push(next);
            }
        }

        return ans;
    }
};
