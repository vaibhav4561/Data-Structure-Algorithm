class Solution {
public:
    string minWindow(string s, string t) {
        int freq[256] = {0};
        int n = s.size();
        int m = t.size();
        int i=0, j=0;
        int cnt = 0;
        int minlen = INT_MAX;
        int s_idx = -1;

        for(int i=0;i<m;i++){
            freq[t[i]]++;
        }

        while(j < n){
            if(freq[s[j]] > 0) cnt++;

            freq[s[j]]--;
            while(cnt == m){
                if(j-i+1 < minlen){
                    s_idx = i;
                    minlen = j-i+1;
                }
                freq[s[i]]++;
                if(freq[s[i]] > 0)cnt--;
                i++;
            }
            j++;
        }
        return s_idx == -1 ? "" : s.substr(s_idx,minlen);
    }
};