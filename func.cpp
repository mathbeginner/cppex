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
