#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int total=0;
        int countOdd=0;
        unordered_map<int,int> m;
        int n=nums.size();
        for(int i=0; i<n; i++)
        {
            if(nums[i]%2==1)
            countOdd++;
            if(countOdd==k)
            total++;
            if(m.find(countOdd-k)!=m.end())
            total+=m[countOdd-k];
            m[countOdd]++;
        }
        return total;
    }
};