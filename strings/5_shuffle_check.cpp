#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

bool check_length(string a, string b, string res) {
    return (a.size() + b.size() == res.size());
}

bool shuffle_check(string a, string b, string res) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(res.begin(),res.end());

    int i = 0,j = 0,k = 0;
    while(k != res.size()) {
        if (i < a.size() && a[i] == res[k])
            i++;
        else if (j < b.size() && b[j] == res[k])
            j++;
        else
            return false;
        k++;
    }
    if(i < a.size() || j < b.size())
        return false;

    return true;
}

int main() {
    int n;
    cin >> n;
    string s,t;
    cin >> s >> t;
    vector<string> res(n);
    for(int i=0;i<n;i++) {
        cin >> res[i];
    }
    for(auto result : res) {
        if(check_length(s,t,result) && shuffle_check(s,t,result)) {
            cout << result << " is a shuffle of " << s << " and " << t << endl; 
        } else {
            cout << result << " is not a shuffle of " << s << " and " << t << endl;
        }
    }
}
