class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // Base case: if root is null, or matches either p or q
        if (root == nullptr || root == p || root == q) {
            return root;
        }

        // Look for p and q in left and right subtrees
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);

        // If both subtrees returned a non-null node, root is the LCA
        if (left != nullptr && right != nullptr) {
            return root;
        }

        // If only one subtree found a node, return that non-null result
        return (left != nullptr) ? left : right;
    }
};
