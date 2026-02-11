/*************************************************************

    Following is the Binary Tree node structure
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };

*************************************************************/

pair<int, int> predecessorSuccessor(TreeNode *root, int key)
{
    TreeNode* temp = root;
    int pred = -1;
    int succ = -1;

    while(temp->data != key){
        if(temp->data > key){
            succ = temp->data;
            temp = temp->left;
        }
        else{
            pred = temp->data;
            temp = temp->right;
        }
    }

    //pred
    TreeNode* left = temp->left;
    while(left){
        pred = left->data;
        left = left->right;
    }

    //succ
    TreeNode* right = temp->right;
    while(right){
        succ = right->data;
        right = right->left;
    }

    return {pred,succ};
}