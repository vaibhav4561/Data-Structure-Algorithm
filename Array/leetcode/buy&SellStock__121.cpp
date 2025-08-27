#include <bits/stdc++.h> 
using namespace std;

int maxProfit(vector<int>& prices) {
        int maxi = 0; 
        int buy = prices[0];
        for(int i = 1; i<prices.size(); i++){
            int profit = prices[i] - buy;
            maxi = max(profit, maxi);
            buy = min(buy,prices[i]);
        }
        return maxi;
        
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i= 0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    cout<<maxProfit(arr);

    

}