#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

// utility function to input array
void input_array(int* arr, int n) {
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
}

int find_longest_conseq_subseq(int* a, int n)
{
    int cnt = 1;
    int ans = INT_MIN;
    set<int> s;
    vector<int> v;
    for(int i=0;i<n;i++) {
        s.insert(a[i]);
    }
    for(auto i : s) {
        v.push_back(i);
    }
    for(int i=1;i<v.size();i++) {
        if(v[i] == (v[i-1]+1)) cnt++;
        
        else {
            ans = max(ans,cnt);
            cnt = 1;
        }
    }
    ans = max(ans,cnt);
    return ans;
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    input_array(arr,n);
    cout << find_longest_conseq_subseq(arr,n) << endl;
}
