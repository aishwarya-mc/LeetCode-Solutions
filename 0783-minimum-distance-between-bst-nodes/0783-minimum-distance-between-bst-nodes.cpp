/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int ans = INT_MAX;
    TreeNode* prev = nullptr;

    void finddiff(TreeNode* root) {
        if(root == nullptr) return;
        finddiff(root->left);
        if(prev!=nullptr) {
            ans = min(ans, root->val - prev->val);
        }

        prev = root;
        finddiff(root->right);
    }


    int minDiffInBST(TreeNode* root) {

       // if(root == nullptr) return 0;
        finddiff(root);
        return ans;
    }
};