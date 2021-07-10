#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

string countAndSay(int n) {
    if(n==1) return "1";

    string prev = countAndSay(n-1);
    string smallOut = "";
    char curr = prev[0];
    int count = 1;
    for(int i=1;i<prev.size();i++) {
        char temp_curr = prev[i];
        if(temp_curr == curr) count++;
        else {
            smallOut += to_string(count);
            smallOut += curr;
            curr = temp_curr;
            count = 1;
        }
    }
    smallOut += to_string(count);
    smallOut += curr;

    return smallOut;
}

int main() {
    int n;
    cin >> n;
    cout << countAndSay(n);
}
