#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

//increasing number order
void print_in_decreasing(int n) {
    if(n==0) return;

    cout << n << " ";

    print_in_decreasing(n-1);
}

//decreasing number order
void print_in_increasing(int n) {
    if(n==0) return;

    print_in_increasing(n-1);

    cout << n << " ";
}

int main() {
    int n;
    cin >> n;
    print_in_increasing(n);
    cout << endl;
    print_in_decreasing(n);
}
