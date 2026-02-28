class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> mp(26,0);

        for(auto &ch: tasks){
            mp[ch-'A']++;
        }

        priority_queue<int> pq;

        int time = 0;

        for(int i=0;i<26;i++){
            if(mp[i]>0)
                pq.push(mp[i]);
        }

        while(!pq.empty()){
            vector<int> cycle;

            for(int i=1;i<=n+1;i++){ // 1 for itself + n for cool time
                if(!pq.empty()){
                    int freq = pq.top();
                    pq.pop();
                    freq--;
                    cycle.push_back(freq);
                }
            }

            for(auto &it: cycle){
                if(it > 0)
                    pq.push(it);
            }

            if(pq.empty())
                time += cycle.size();
            else time += n+1;
        }
        return time;
    }
};