class Solution {
public:
    int reverse(int x) {
        bool flag = false;
        if (x < 0)
            flag = true;

        long long num = x;   // convert to long long first
        if (num < 0)
            num = -num;

        long long ans = 0;

        while (num > 0) {
            int r = num % 10;
            ans = ans * 10 + r;
            num /= 10;
        }

        if (flag)
            ans = -ans;

        if (ans > INT_MAX || ans < INT_MIN)
            return 0;

        return (int)ans;
    }
};