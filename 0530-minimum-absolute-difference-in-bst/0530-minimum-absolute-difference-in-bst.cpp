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

    void mindiff(TreeNode* root, int &prev, int &mindist) {
        if (root==NULL) return;
        mindiff(root->left,prev,mindist);
        if(prev!=-1) {
            mindist = min(mindist,root->val - prev);
        }

        prev = root->val;
        mindiff(root->right,prev,mindist);
    }
     


    int getMinimumDifference(TreeNode* root) {
        int prev = -1;
        int mindist = INT_MAX;
        mindiff(root,prev,mindist);
        return mindist;
        
    }
};