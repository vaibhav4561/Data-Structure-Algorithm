class Solution {
public:
    bool allzero(vector<int>& counter){
        for(auto &i:counter){
            if(i != 0){
                return false;
            }
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int m = p.size();
        if(m>n) return{};

        vector<int> counter(26,0);

        for(int i=0;i<m;i++){
            counter[p[i]-'a']++;
        }

        int i=0,j=0;
        vector<int> ans;
        while(j < n){
            counter[s[j]-'a']--;

            if(j-i+1 == m){
                if(allzero(counter)){
                    ans.push_back(i);
                }
                counter[s[i]-'a']++;
                i++;
            }
            j++;
        }
        return ans;
    }
};