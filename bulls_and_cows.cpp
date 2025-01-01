#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string getHint(string secret, string guess) {
        int cows=0, bulls=0;
        int n=secret.length();
        vector<int> vis(n,0);
        for(int i=0; i<n; i++)
        {
            if(secret[i]==guess[i])
            {
                bulls++;
                vis[i]=1;
            }
            else
            {
                for(int j=0; j<n; j++)
                {
                    if(j!=i && vis[j]==0 && secret[j]==guess[i] && secret[j]!=guess[j])
                    {
                        cows++;
                        vis[j]=1;
                        break;
                    }
                }
            }
        }
        string s="";
        s+= to_string(bulls);
        s+="A";
        s+= to_string(cows);
        s+="B";

        return s;
    }
};