class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(int x : nums){
            int count = 0 ;

            while(x>0){
                int n = x%10 ;
                count++;
                x = x/10;
            }
            if(count%2 == 0) ans++;
        }

        return ans;
    }
};