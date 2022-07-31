#ifndef FUNC_H
#define FUNC_H
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

#endif
