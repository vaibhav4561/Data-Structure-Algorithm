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
    
    int maxSum = 0;
    
    struct NodeInfo {
        bool isBST;
        int sum;
        int minVal;
        int maxVal;
    };
    
    NodeInfo solve(TreeNode* root){
        
        if(root == NULL){
            return {true, 0, INT_MAX, INT_MIN};
        }
        
        NodeInfo left = solve(root->left);
        NodeInfo right = solve(root->right);
        
        NodeInfo curr;
        
        // Check BST condition properly
        if(left.isBST && right.isBST &&
           root->val > left.maxVal &&
           root->val < right.minVal){
            
            curr.isBST = true;
            curr.sum = root->val + left.sum + right.sum;
            
            curr.minVal = min(root->val, left.minVal);
            curr.maxVal = max(root->val, right.maxVal);
            
            maxSum = max(maxSum, curr.sum);
        }
        else{
            curr.isBST = false;
            curr.sum = 0;
            curr.minVal = 0;
            curr.maxVal = 0;
        }
        
        return curr;
    }
    
    int maxSumBST(TreeNode* root) {
        solve(root);
        return maxSum;
    }
};
