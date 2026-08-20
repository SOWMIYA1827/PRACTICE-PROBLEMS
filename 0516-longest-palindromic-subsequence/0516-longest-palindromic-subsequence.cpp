class Solution {
public:

    int lps(string& s, int low, int high, vector<vector<int>>& dp) {

        if (low > high)
            return 0;

        if (low == high)
            return 1;

        if (dp[low][high] != -1)
            return dp[low][high];

        if (s[low] == s[high]) {
            return dp[low][high] =
                lps(s, low + 1, high - 1, dp) + 2;
        }

        return dp[low][high] = max(
            lps(s, low, high - 1, dp),
            lps(s, low + 1, high, dp)
        );
    }

    int longestPalindromeSubseq(string s) {

        int n = s.length();

        vector<vector<int>> dp(           n,
            vector<int>(n, -1)
        );

        return lps(s, 0, n - 1, dp);
    }
};