class Solution {
private:
    vector<int> rightsmaller(vector<int>& heights, int n){
        stack<int> s;
        vector<int> ans(n,0);
        for(int i=n-1;i>=0;i--){
            while(s.size() > 0 && heights[s.top()] >= heights[i]){
                s.pop();
            }
            ans[i] = s.empty() ? n : s.top();
            s.push(i);
        }
        return ans;
    }

    vector<int> leftsmaller(vector<int>& heights, int n){
        stack<int> s;
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            while(s.size() > 0 && heights[s.top()] >= heights[i]){
                s.pop();
            }
            ans[i] = s.empty() ? -1 : s.top();
            s.push(i);
        }
        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> r;
        vector<int> l;
        r = rightsmaller(heights,n);
        l = leftsmaller(heights,n);
        
        int ans = 0;
        for(int i=0;i<n;i++){
            int h = heights[i];
            int b = r[i] - l[i] - 1;
            int area = h * b;
            ans = max(area,ans);
        }
        return ans;
    }


public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<vector<int>> mat(n, vector<int>(m,0) );

        for(int j=0;j<m;j++){
            int sum = 0;
            for(int i=0;i<n;i++){
                sum += matrix[i][j] - '0';

                if(matrix[i][j]-'0' == 0){
                    sum = 0;
                }
                mat[i][j] = sum;
            }
        }

        int ans = 0;

        for(int i=0;i<n;i++){
            int area = largestRectangleArea(mat[i]);

            ans = max(ans,area); 
        }

        return ans;
        
    }
};