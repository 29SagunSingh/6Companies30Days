#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int sum=0;
        for(int i=0; i<n/2; i++)
        {
            sum+=abs(nums[n/2]-nums[i]);
        }
        for(int i=n/2+1; i<n; i++)
        {
            sum+=abs(nums[i]-nums[n/2]);
        }
        return sum;
    }
};