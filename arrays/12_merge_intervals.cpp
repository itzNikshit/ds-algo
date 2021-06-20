#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

// function for problem
vector<vector<int>> merge_intervals(vector<vector<int>>& intervals) {
    vector<pair<int,int>> v1;
    int x,y;
    for(int i=0;i<intervals.size();i++) {
        x = intervals[i][0];
        y = intervals[i][1];

        v1.push_back({x,y});
    }
    sort(v1.begin(),v1.end());
    vector<pair<int,int>>::iterator it;
    for(int i=0;i<v1.size()-1;i++) {
        if(v1[i].second >= v1[i+1].first) {
            v1[i].second = max(v1[i].second,v1[i+1].second);
            it = v1.begin() + (i+1);
            v1.erase(it);
            i--;
        }
    }
    vector<vector<int>> result(v1.size(),vector<int>(2,0));
    for(int i=0;i<v1.size();i++) {
        result[i][0] = v1[i].first;
        result[i][1] = v1[i].second;
    }

    return result;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> intervals(n,vector<int>(2,0));
    for(int i=0;i<n;i++) {
        for(int j=0;j<2;j++) {
            cin >> intervals[i][j];
        }
    }
    vector<vector<int>> ans = merge_intervals(intervals);
    for(int i=0;i<ans.size();i++) {
        for(int j=0;j<2;j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
