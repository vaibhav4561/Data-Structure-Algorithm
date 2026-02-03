class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        int i=0,j=0;
        int count = 0;
        int ans = 0;

        while(j<n){
            if(s[j]=='a' || s[j]=='i' || s[j]=='o' || s[j]=='e' || s[j]=='u'){
                count++;
            }
            if(j-i+1 == k){
                if(ans < count){
                    ans = count;
                }
                
                if(s[i]=='a' || s[i]=='i' || s[i]=='o' || s[i]=='e' || s[i]=='u'){
                    count--;
                }
                i++;
            }
            j++;
        }
        return ans;
    }
};