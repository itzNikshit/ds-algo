#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

void input_array(int* arr, int n) {
    for(int i=0;i<n;i++) cin >> arr[i];
}

int max_contagious_len(int* arr, int n) {
    int first = arr[0], second;
    int start = 0;
    int end = 0;
    int s = 0;
    int max_len = INT_MIN;
    for(int i=1;i<n;i++) {
        second = arr[i];
        if (second > first) {
            start = s;
            end = i;
            max_len = max(max_len,end-start+1);
        }
        if(second < first) {
            first = arr[i];
            s = i;
        }
    }
    return max_len;
}

int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    input_array(arr,n);
    cout << max_contagious_len(arr,n) << endl;
    return 0;
}
