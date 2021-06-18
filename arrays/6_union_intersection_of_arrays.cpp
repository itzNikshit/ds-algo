#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

set<int> union_of_arrays(int* a, int n, int* b, int m) {
    set<int> s;

    for(int i=0;i<n;i++) s.insert(a[i]);

    for(int i=0;i<m;i++) s.insert(b[i]);

    return s;
}

vector<int> intersection_of_arrays(int* a, int n, int* b, int m) {
    int* temp1 = new int[n];
    int* temp2 = new int[m];

    for(int i=0;i<n;i++) temp1[i] = a[i];

    for(int i=0;i<m;i++) temp2[i] = b[i];

    sort(temp1,temp1+n);
    sort(temp2,temp2+m);
    vector<int> v;

    int i=0,j=0;
    while(i<n && j<m) {
        if(temp1[i] == temp2[j]) {
            v.push_back(temp1[i]);
            i++;
            j++;
        }

        else if(temp1[i] < temp2[j]) i++;

        else if(temp1[i] > temp2[j]) j++;
    }

    return v;
}

// utility function to input array
void input_array(int* arr, int n) {
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
}

// utility function to print array
void print_array(int* arr, int n) {
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n,m;
    cin >> n >> m;
    int* a = new int[n];
    int* b = new int[m];
    input_array(a,n);
    input_array(b,m);
    set<int> s = union_of_arrays(a,n,b,m);
    vector<int> v = intersection_of_arrays(a,n,b,m);
    for(auto i : s) cout << i << " ";
    cout << endl;
    for(auto i : v) cout << i << " ";
}