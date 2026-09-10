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
    int sumofvalue(TreeNode* root){
        if(root == nullptr){
            return 0 ;
        }

        return root->val + sumofvalue(root->left) + sumofvalue(root->right);
    }

    int countvalue(TreeNode* root){
        if(root == nullptr){
            return 0 ;
        }

        int left = 1 + countvalue(root->left);
        int right = 1 + countvalue(root->right);

        return left+right-1 ;
    }
    
    int count = 0 ;

    int averageOfSubtree(TreeNode* root) {
        if( root == nullptr ){
            return 0 ;
        }
        
        int sum = sumofvalue(root);
        int noofsum = countvalue(root);

        int ans = sum / noofsum ;
        if( root->val == ans ){
            count++;
        }
       
        averageOfSubtree( root->left );
        averageOfSubtree( root->right );

        return count ;
    }
};