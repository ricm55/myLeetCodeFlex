/*
Name: Same Tree
Description:
Given the roots of two binary trees p and q, write a function to check if they are the same or not.

Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

Link: https://leetcode.com/problems/same-tree/
*/
#include <bits/stdc++.h>

#define IO() {\
             freopen("input.txt", "r", stdin); \
             freopen("output.txt", "w", stdout);\
}
    
#define IN freopen("input.txt", "r", stdin);
#define OUT freopen("output.txt", "w", stdout);

#define TEST 3 //Choose the test

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
//4ms
bool isSameTreeV1(TreeNode* p, TreeNode* q) {

    if(p  == nullptr && q == nullptr){
        return true;
    }
    else if(p != nullptr && q==nullptr || q!=nullptr && p == nullptr){
        return false;
    }

    if(p->val == q->val){
        
        if (isSameTreeV1(p->left,q->left)){
            if(!isSameTreeV1(p->right,q->right)){
                return false;
            }
        }else{
            return false;
        }
    }else{
        return false;
    }
    return true;
}

//3ms
bool isSameTree(TreeNode* p, TreeNode* q) {

    if(p  == nullptr && q == nullptr) return true;

    if(p == nullptr || q==nullptr) return false;

    if(p->val != q->val) return false;

    return isSameTree(p->left, q->left) &&
            isSameTree(p->right,q->right); 
}


int main(){
#if TEST == 1 
    struct TreeNode p(1,new TreeNode(2),new TreeNode(3));
    struct TreeNode q(1,new TreeNode(2),new TreeNode(3));
#elif TEST == 2
    struct TreeNode p(1,new TreeNode(2,new TreeNode(3),new TreeNode(7)),new TreeNode(50,new TreeNode(12),new TreeNode(70)));
    struct TreeNode q(1,new TreeNode(2,new TreeNode(3),new TreeNode(7)),new TreeNode(50,new TreeNode(12),new TreeNode(70)));
#elif TEST == 3
    struct TreeNode p(1, new TreeNode(2),new TreeNode(3, nullptr, new TreeNode(4,nullptr,new TreeNode(55))));
    struct TreeNode q(1, new TreeNode(2),new TreeNode(3, nullptr, new TreeNode(4,new TreeNode(77),new TreeNode(55))));
#endif
    cout << "le result => " <<isSameTree(&p , &q) << endl;
    return 0;
}