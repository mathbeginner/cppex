#include"func.h"
#include<iostream>
#include<stack>
#include<vector>

using namespace std;

vector<int> Solution::inorderTraversal(TreeNode* root) {
  if(!root) return {};
  
  vector<int> output;
  stack<TreeNode*> stk;
  TreeNode *cur=root;
  while(cur||!stk.empty()){
    while(cur){
      stk.push(cur);
      cur=cur->left;
    }
    TreeNode *s=stk.top();
    output.push_back(s->val);
    stk.pop();
    cur=s->right;
  }
  return output;
}
