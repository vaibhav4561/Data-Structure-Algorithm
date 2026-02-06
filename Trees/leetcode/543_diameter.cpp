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
    int calculateHeight(TreeNode* root,int& diameter){
        if(root == NULL){
            return 0;
        }
        int left = calculateHeight(root->left,diameter);
        int right = calculateHeight(root->right,diameter);
        diameter = max(diameter, left + right);

        return 1 + max(left , right);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        calculateHeight(root,diameter);
        return diameter;
        
    }
};