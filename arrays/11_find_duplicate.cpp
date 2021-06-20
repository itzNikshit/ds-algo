#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

// function for problem
int findDuplicate(vector<int>& nums) {
    int tortoise = nums[0];
    int hare = nums[0];
    
    while(true) {
        tortoise = nums[tortoise];
        hare = nums[nums[hare]];
        if(tortoise == hare) {
            break;
        }
    }
    int ptr1 = nums[0];
    int ptr2 = tortoise;

    while(ptr1 != ptr2) {
        ptr1 = nums[ptr1];
        ptr2 = nums[ptr2];
    }

    return ptr1;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n+1);
    for(int i=0;i<=n;i++) {
        cin >> nums[i];
    }
    cout << findDuplicate(nums);
}
