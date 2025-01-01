#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int incremovableSubarrayCount(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0; i<n; i++)
        {
            for(int j=i; j<n; j++)
            {
                vector<int> v;
                int k=0;
                while(k<i)
                {
                    v.push_back(nums[k++]);
                }
                k=j+1;
                while(k<n)
                {
                    v.push_back(nums[k++]);
                }
                int flag=1;
                for(int c=1; c<v.size(); c++)
                {
                    if(v[c]<=v[c-1])
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag)
                count++;
            }
        }
        return count;
    }
};