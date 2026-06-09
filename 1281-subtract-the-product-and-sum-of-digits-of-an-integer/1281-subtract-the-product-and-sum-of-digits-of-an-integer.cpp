class Solution {
public:
    int subtractProductAndSum(int n) {
        int add=0 , mult=1 ;

        while(n>0){
            int r = n%10 ;
            add = add + r ; mult = mult * r ;
            n = n/10 ;
        }

        int ans = mult - add ;
        return ans ;
    }
};