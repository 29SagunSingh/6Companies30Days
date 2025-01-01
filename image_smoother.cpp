#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int n=img.size();
        int r=img[0].size();
        vector<vector<int>> v(n,vector<int>(r));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<r; j++)
            {
                int count=1;
                int sum=img[i][j];
                if(j+1<r)
                {
                    sum+=img[i][j+1];
                    count++;
                }
                if(j!=0)
                {
                    sum+=img[i][j-1];
                    count++;
                }
                if(i+1<n)
                {
                    sum+=img[i+1][j];
                    count++;
                }
                if(i!=0)
                {
                    sum+=img[i-1][j];
                    count++;
                }
                if(i+1<n && j+1<r)
                {
                    sum+=img[i+1][j+1];
                    count++;
                }
                if(i+1<n && j!=0)
                {
                    sum+=img[i+1][j-1];
                    count++;
                }
                if(i!=0 && j+1<r)
                {
                    sum+=img[i-1][j+1];
                    count++;
                }
                if(i!=0 && j!=0)
                {
                    sum+=img[i-1][j-1];
                    count++;
                }
                v[i][j]=sum/count;
            }
        }
        return v;
    }
};