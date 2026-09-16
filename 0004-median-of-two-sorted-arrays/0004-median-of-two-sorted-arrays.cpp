class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> result;
       int i=0,j=0;
        while(i < nums1.size() || j < nums2.size())
        {
            if(j >= nums2.size() || (i < nums1.size() && nums1[i] < nums2[j]))
            result.push_back(nums1[i++]);
            
            else result.push_back(nums2[j++]);
        }
        if(result.size() % 2 != 0)
        return result[result.size()/2];

        double val1 = result[result.size()/2];
        double val2 = result[result.size()/2-1];

        return (val1+val2)/2.0;
        }
};