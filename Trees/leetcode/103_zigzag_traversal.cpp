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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL){
            return ans;
        }

        queue<TreeNode*> q;
        q.push(root);

        bool right2left = true;

        while(!q.empty()){
            int n = q.size();
            vector<int> level(n);

            for(int i=0; i<n; i++){
                TreeNode* temp = q.front();
                q.pop();

                int idx = right2left ? i : n-i-1 ;
                level[idx] = temp->val;

                if(temp->left != NULL) q.push(temp->left);
                if(temp->right != NULL) q.push(temp->right);

            }
            right2left = !right2left;
            ans.push_back(level);
        }
        return ans;
    }
};