#ifndef FUNC_H
#define FUNC_H
<<<<<<< HEAD

#include<iostream>
=======
<<<<<<< HEAD
#include<string>
#include<vector>
#include<iostream>

using namespace std;

class Solution {
public:
    unordered_map<string, priority_queue<string, vector<string>, std::greater<string>>> vec;
    vector<string> stk;

    void dfs(const string& curr); 

    vector<string> findItinerary(vector<vector<string>>& tickets);
    
};

=======

#include<iostream>
#include<stack>
#include<vector>
>>>>>>> 2b76d576355f417f5db0649911aa3f255afea0f9

using namespace std;

struct TreeNode {
<<<<<<< HEAD
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



=======
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
public:
  vector<int> inorderTraversal(TreeNode* root);
};


>>>>>>> dea3260901c41a274f5914408446f44578cce21f
>>>>>>> 2b76d576355f417f5db0649911aa3f255afea0f9
#endif
