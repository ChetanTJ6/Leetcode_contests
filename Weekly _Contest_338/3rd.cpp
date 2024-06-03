#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    #define ll long long
    vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {
        
        int n=nums.size();
        vector<ll> ans,pre(n,0);
        ll sum=0;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            pre[i]=sum;
        }
        
       
        for(auto &x:queries)
        {
            auto index=lower_bound(nums.begin(),nums.end(),x)-nums.begin();
            // cout<<"x :"<<x<<endl;
            
           ll left=0,right=0;
            
           if(index-1>=0)
           {
               left=((ll)x*(index))-pre[index-1];
           }
            
           if(index<n)
           {
               right=(sum-pre[index]+nums[index]-(ll)x*(n-index));
           }
    
            ans.push_back(right+left);
        }
        
        return ans;
        
        
    }
};