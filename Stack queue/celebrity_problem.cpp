class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        // code here
        stack<int> st;
        int n = mat.size();
        
        for(int i=0;i<n;i++){
            st.push(i);
        }
        
        while(st.size() > 1){
            int a = st.top();
            st.pop();
            int b= st.top();
            st.pop();
            
            if(mat[a][b] == 1){
                st.push(b);
            }
            else{
                st.push(a);
            }
        }
        int candidate = st.top();
        
        // row check
        for(int i=0;i<n;i++){
            if(candidate != i && mat[candidate][i] == 1){
                return -1;
            }
        }
        
        // col check
        for(int i=0;i<n;i++){
            if(candidate != i && mat[i][candidate] == 0){
                return -1;
            }
        }
        
        return candidate;
        
    }
};