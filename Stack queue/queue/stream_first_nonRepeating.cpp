class Solution {
  public:
    string firstNonRepeating(string &s) {
        queue<char> q;
        unordered_map<char, int> freq;
        string ans = "";

        for (int i = 0; i < s.size(); i++) {
            freq[s[i]]++;
            q.push(s[i]);

            while (!q.empty() && freq[q.front()] > 1) {
                q.pop();
            }

            if (q.empty()) {
                ans.push_back('#');
            } else {
                ans.push_back(q.front());
            }
        }
        return ans;
    }
};