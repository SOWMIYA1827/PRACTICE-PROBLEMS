class Solution {
public:
    bool issequence(string temp, string p) {
        int i = 0, j = 0;

        while (i < temp.length() && j < p.length()) {
            if (temp[i] == p[j]) {
                j++;
            }
            i++;
        }
        return j == p.length();
    }
    int maximumRemovals(string s, string p, vector<int>& removable) {
        int n = removable.size();

        int low = 0, high = n;
        int ans = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            vector<bool> removed(s.length(), false);

            for (int i = 0; i < mid; i++) {
                removed[removable[i]] = true;
            }

            string temp = "";
            for (int i = 0; i < s.length(); i++) {
                if (!removed[i]) {
                    temp += s[i];
                }
            }

            bool isseq = issequence(temp, p);

            if (isseq) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return ans;
    }
};