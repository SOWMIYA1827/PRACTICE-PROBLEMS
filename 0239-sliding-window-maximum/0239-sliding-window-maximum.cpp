class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        vector<int> ans;
        multiset<int> st;

        // Add first k elements
        for (int i = 0; i < k; i++) {
            st.insert(nums[i]);
        }

        // Maximum of first window
        ans.push_back(*st.rbegin());

        // Slide the window
        for (int i = k; i < nums.size(); i++) {

            // Remove outgoing element
            st.erase(st.find(nums[i - k]));

            // Add new element
            st.insert(nums[i]);

            // Maximum
            ans.push_back(*st.rbegin());
        }

        return ans;
    }
};