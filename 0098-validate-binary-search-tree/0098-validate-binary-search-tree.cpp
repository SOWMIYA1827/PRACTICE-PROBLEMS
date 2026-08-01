class Solution {
private:
    bool inorder(TreeNode* root, TreeNode*& prev) {
        if (root == nullptr) {
            return true;
        }
        
        // Check the left subtree
        if (!inorder(root->left, prev)) {
            return false;
        }
        
        // Validate current node's value against the previous node
        if (prev != nullptr && root->val <= prev->val) {
            return false;
        }
        
        // Update the previous node pointer to the current node
        prev = root;
        
        // Check the right subtree
        return inorder(root->right, prev);
    }

public:
    bool isValidBST(TreeNode* root) {
        TreeNode* prev = nullptr;
        return inorder(root, prev);
    }
};
