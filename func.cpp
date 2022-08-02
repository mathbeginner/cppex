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
