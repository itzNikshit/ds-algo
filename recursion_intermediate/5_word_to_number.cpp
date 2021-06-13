#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

int word_to_number(vector<string> v, vector<pair<string,int>> mp, int i, int n) {
    if(n == 0) return 0;

    string s = v[i];
    int smallOut;
    for(int j=0;j<mp.size();j++) {
        if(mp[j].first == s) smallOut = mp[j].second;
    }

    return smallOut*(pow(10,n-1)) + word_to_number(v,mp,i+1,n-1);
}

int main() {
    string s;
    string temp = "";
    getline(cin,s);
    char* ch = new char;
    *ch = ' ';
    vector<string> v;
    for(int i=0;i<s.size();i++) {
        if(s[i] == *ch) {
            v.push_back(temp);
            temp.clear();
            i++;
        }
        temp += s[i];
    }
    v.push_back(temp);
    
    vector<pair<string,int>> mp;
    mp.push_back(make_pair("zero",0));
    mp.push_back(make_pair("one",1));
    mp.push_back(make_pair("two",2));
    mp.push_back(make_pair("three",3));
    mp.push_back(make_pair("four",4));
    mp.push_back(make_pair("five",5));
    mp.push_back(make_pair("six",6));
    mp.push_back(make_pair("seven",7));
    mp.push_back(make_pair("eight",8));
    mp.push_back(make_pair("nine",9));

    int x = word_to_number(v,mp,0,v.size());
    cout << x << endl;
}