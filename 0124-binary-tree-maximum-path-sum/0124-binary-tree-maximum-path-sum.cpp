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
    int maxsum = INT_MIN ;
    int helper(TreeNode* root){
        if( root == nullptr){
            return 0 ;
        }

        int leftMaxSum = max(helper(root->left) , 0);
        int rightMaxSum = max(helper(root->right),0);
        maxsum = max(maxsum , leftMaxSum + rightMaxSum + root->val);
        return max(leftMaxSum, rightMaxSum) + root->val ;
    }
    int maxPathSum(TreeNode* root) {
        maxsum = root->val ;
        helper(root);
        return maxsum ;
    }

};