#include"func.h"
#include<iostream>
#include<vector>

using namespace std;

int main(){
  TreeNode c=(3);
  TreeNode b=(2);
  TreeNode a(1);
  a.right=&b;
  b.left=&c;
  vector<int> output;
  Solution A;
  output=A.inorderTraversal(&a);
  for(int i=0;i<output.size();i++){
    cout<<output[i]<<" ";
  }
  cout<<endl;
}
