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
    TreeNode* invertTree(TreeNode* root) {
        if( root == nullptr ){
            return NULL ;
        }

        TreeNode* node1 = invertTree( root->left);
        TreeNode* node2 = invertTree( root->right);

        root->left = node2 ;
        root->right = node1 ;

        return root ;
    }
};