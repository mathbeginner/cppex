#ifndef FUNC_H
#define FUNC_H

#include<iostream>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
TreeNode() : val(0), left(nullptr), right(nullptr) {}
TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
  bool isValid(TreeNode* root,long low,long upp);
  bool isValidBST(TreeNode* root); 
  
};



#endif
