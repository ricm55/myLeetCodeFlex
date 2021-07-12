/*
Name: RemoveElement
Description:
Given an array nums and a value val, remove all instances of that value in-place and return the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

The order of elements can be changed. It doesn't matter what you leave beyond the new length.

Link: https://leetcode.com/problems/remove-element/
*/
#include <bits/stdc++.h>

#define IO() {\
             freopen("input.txt", "r", stdin); \
             freopen("output.txt", "w", stdout);\
}
    
#define IN freopen("input.txt", "r", stdin);
#define OUT freopen("output.txt", "w", stdout);

#define MP make_pair

using namespace std;

typedef stack<char> stk;
typedef pair<char, char> pcc; 

int removeElement(vector<int>& nums, int val) {
    for(int i = 0;i<nums.size();i++){
        if(nums[i] == val){
            nums.erase(nums.begin()+i);
            i--;
        }
            
    }
    return nums.size();
}

int main(){

    vector<int> nums = {1,2,3,4,4,5,6};
    
    cout << removeElement(nums, 4)<<'\n';
    cout<<"the array: ";
    for(int x:nums){
        cout <<x<<", ";
    }
    cout<<'\n';
    return 0;
}