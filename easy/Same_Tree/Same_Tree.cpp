/*
Name: Same Tree
Description:
Given the roots of two binary trees p and q, write a function to check if they are the same or not.

Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

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


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 

bool isSameTree(TreeNode* p, TreeNode* q) {
    
    return false;
}

int main(){
/*
    vector<int> nums = {1,2,3,4,4,5,6};
    
    cout << removeElement(nums, 4)<<'\n';
    cout<<"the array: ";
    for(int x:nums){
        cout <<x<<", ";
    }
    cout<<'\n';*/
    return 0;
}