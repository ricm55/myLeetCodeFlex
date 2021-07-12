/*
Name: valid-parentheses
Description:
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

1- Open brackets must be closed by the same type of brackets.
2- Open brackets must be closed in the correct order.

link: https://leetcode.com/problems/valid-parentheses/
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

bool isValid(string s) {
    
    stk reminder;
    pcc association[] = {
        MP('(',')'),
        MP('{','}'),
        MP('[',']')
    };
   
    for(char c: s){
        if(c == association[0].first ||c == association[1].first || c == association[2].first){
            reminder.push(c);
        }
        else{
            char openChar;
            for(pcc p: association){
                if(p.second == c){
                    openChar = p.first;
                }
            }
            if(reminder.size()){    
                if(reminder.top() == openChar){
                    reminder.pop();
                }else{
                    return false;
                }
            }else{
                return false;
            }
        }   
    }
    return reminder.empty();
}

int main(){

    IO();
    string s;
    
   while(getline(cin,s)){
      cout <<isValid(s)<<'\n'; 
   }
    
    return 0;
}