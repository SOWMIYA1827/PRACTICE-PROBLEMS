/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root == nullptr){
            return {};
        }
        queue<TreeNode*> q;

        q.push(root);
        int level = 0 ;

        while(!q.empty()){
            int n = q.size();
          
            vector<int> demo ;
               for(int i=0 ; i<n ; i++){
                  TreeNode* temp = q.front();
                  q.pop();
                  demo.push_back(temp->val);

                  if(temp->left != nullptr){
                     q.push(temp->left);
                  }
                  if(temp->right != nullptr){
                    q.push(temp->right);
                  }
               
               }

               if(level % 2 == 1){
                  reverse(demo.begin(),demo.end());
                  result.push_back(demo);
               }
               else{
                    result.push_back(demo);
               }
            level++;
        }
      return result ;
    }
};