class Solution {
public:
    void finalsolution(vector<vector<int>>& result , vector<int>& path , int index ,
    int target , vector<int>& candidates ){
        if(target == 0){
            result.push_back(path);
            return;
        }

        if(target < 0 || index >= candidates.size()){
            return;
        }

        path.push_back(candidates[index]);
        finalsolution(result,path,index,target-candidates[index],candidates);
        path.pop_back();
        finalsolution(result,path,index+1,target,candidates);



    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> path;
        finalsolution(result , path , 0 , target , candidates);
        return result ;
    }
};