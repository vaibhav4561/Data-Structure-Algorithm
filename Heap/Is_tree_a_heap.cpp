/*
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    int totalCount(struct Node* root){
        if(root == NULL) return 0;
        
            int ans =  1 + totalCount(root->left) + totalCount(root->right);
            return ans;
        }

    bool isCBT(struct Node* root, int index, int count){
        if(root == NULL) return true;
        
        if(index >= count) return false;
        else{
            bool left = isCBT(root->left, 2*index+1, count);
            bool right = isCBT(root->right, 2*index+2, count);
            return (left && right);
        }
    }
    
    bool isMaxOrder(struct Node* root){
        if(root->left == NULL && root->right == NULL) return true;
        
        if(root->right == NULL){
            return (root->data > root->left->data);
        }
        else{
            bool left = isMaxOrder(root->left);
            bool right = isMaxOrder(root->right);
            
            return(left && right
            && ((root->data > root->left->data) && (root->data > root->right->data)));
        }
    }
    
    bool isHeap(struct Node* root) {
        // code here
        int index = 0;
        int count = totalCount(root);
        if(isCBT(root, index, count) && isMaxOrder(root)){
            return true;
        }else{
            return false;
        }
    }
    
};