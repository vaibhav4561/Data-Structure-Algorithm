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
    Node* parentMapping(Node* root, int target, map<Node*,Node*>& nodeToParent){
        Node* res = NULL;
        
        queue<Node*> q;
        q.push(root);
        nodeToParent[root] = NULL;
        
        while(!q.empty()){
            Node* temp = q.front();
            q.pop();
            
            if(temp->data == target){
                res = temp;
            }
            
            if(temp->left){
                nodeToParent[temp->left] = temp;
                q.push(temp->left);
            }
            
            if(temp->right){
                nodeToParent[temp->right] = temp;
                q.push(temp->right);
            }
        }
        return res;
    }
    
    int burnTree(Node* root, map<Node*,Node*>& nodeToParent){
        map<Node*, bool> visited;
        queue<Node*> q;
        
        q.push(root);
        visited[root] = true;
        
        int ans = 0;
        while(!q.empty()){
            bool flag = 0;
            int size = q.size();
            
            for(int i=0;i<size;i++){
                Node* front = q.front();
                q.pop();
                
                if(front->left && !visited[front->left]){
                    flag = 1;
                    q.push(front->left);
                    visited[front->left] = 1;
                }
                if(front->right && !visited[front->right]){
                    flag = 1;
                    q.push(front->right);
                    visited[front->right] = 1;
                }
                if(nodeToParent[front] && !visited[nodeToParent[front]]){
                    flag = 1;
                    q.push(nodeToParent[front]);
                    visited[nodeToParent[front]] = 1;
                }
            }
            if(flag == 1){
                ans ++;
            }
        }
        return ans;
    }
    
    int minTime(Node* root, int target) {
        // steps  
        // create parent child mapping
        // find target node
        //burn tree in min time
        
        map<Node*,Node*> nodeToParent;
        Node* targetNode = parentMapping(root,target,nodeToParent);
        
        int ans = burnTree(targetNode, nodeToParent);
        
        return ans;
        
    }
};