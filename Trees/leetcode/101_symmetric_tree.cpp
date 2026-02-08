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
    
    bool check(TreeNode* r1, TreeNode* r2){
        if(r1 == NULL || r2 == NULL){
            return r1 == r2;
        }
        if(r1->val != r2->val) return false;

        bool outer = check(r1->left, r2->right);
        bool inner = check(r1->right, r2->left);
        
        return outer && inner;
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;

        return check(root->left, root->right);
    }
};