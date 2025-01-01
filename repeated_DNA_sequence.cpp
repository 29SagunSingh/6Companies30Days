#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n=s.size();
        vector<string> v;
        if(n<10)
        return v;
        unordered_map<string,int> m;
        for(int i=0; i<n-9; i++)
        {
            string subs=s.substr(i,10);
            m[subs]++;
        }
        for(auto it:m)
        {
            if(it.second>1)
            {
                v.push_back(it.first);
            }
        }
        return v;
    }
};