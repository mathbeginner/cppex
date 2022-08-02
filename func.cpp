<<<<<<< HEAD
#include<iostream>
#include"func.h"
#include<climits>
using namespace std;

bool Solution::isValid(TreeNode* root,long low,long upp){
        if(!root) return true;
        if(root->left){
            if(root->left->val>=root->val||root->left->val<=low) return false;
        }
        if(root->right){
            if(root->right->val<=root->val||root->right->val>=upp) return false;
        }
        if(isValid(root->left,low,root->val)&&isValid(root->right,root->val,upp)) return true;
        else return false;
    }
bool Solution::isValidBST(TreeNode* root) {
        return isValid(root,LONG_MIN,LONG_MAX);
    }   
=======
#include"func.h"
#include<iostream>
<<<<<<< HEAD
#include<string>
#include<vector>
#include<algorithm>
#include<queue>
#include<unordered_map>

using namespace std;


void Solution::dfs(const string& curr) {
        while (vec.count(curr) && vec[curr].size() > 0) {
            string tmp = vec[curr].top();
            vec[curr].pop();
            dfs(move(tmp));
        }
        stk.emplace_back(curr);
    }

vector<string> Solution::findItinerary(vector<vector<string>>& tickets) {
        for (auto& it : tickets) {
            vec[it[0]].emplace(it[1]);
        }
        dfs("JFK");

        reverse(stk.begin(), stk.end());
        return stk;
    }
=======
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
>>>>>>> dea3260901c41a274f5914408446f44578cce21f
>>>>>>> 2b76d576355f417f5db0649911aa3f255afea0f9
