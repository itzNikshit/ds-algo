#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

// function for problem
int max_profit(vector<int>& prices) {
    int profit = INT_MIN;
    int min_ele = prices[0];
    for(int i=1;i<prices.size();i++) {
        if(prices[i] < min_ele) min_ele = prices[i];

        else {
            profit = max(profit,prices[i]-min_ele);
        }
    }
    return (profit == INT_MIN) ? 0 : profit;
}

int main() {
    int n;
    cin >> n;
    vector<int> prices(n);
    for(int i=0;i<n;i++) cin >> prices[i];
    cout << max_profit(prices) << endl;
}
