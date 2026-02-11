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
    TreeNode* solve(vector<int>& preorder, int min, int max, int& i){
        if(i >= preorder.size()) return NULL;
        if(preorder[i] < min || preorder[i] > max) return NULL;

        TreeNode* temp = new TreeNode(preorder[i++]);
        temp->left = solve(preorder, min, temp->val, i);
        temp->right = solve(preorder, temp->val, max, i);
        return temp;
    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int min = INT_MIN;
        int max = INT_MAX;
        int i = 0; // index
        return solve(preorder, min, max, i);
    }
};