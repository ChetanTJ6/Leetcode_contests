#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool primeSubOperation(vector<int>& nums) {
        
        vector<int> prim(1002,1);
        
        // prime numbers
        for(int i=3;i<prim.size();i++)
        {
            for(int j=2;j*j<=i;j++)
            {
                if(i%j==0)
                {
                    prim[i]=0;
                    break;
                }
            }
        }
        
        int n=nums.size();
        
        
       for(int i=n-2;i>=0;i--)
       {
           if(nums[i]>=nums[i+1])
           {
               int flag=0;
               for(int j=2;j<nums[i];j++)
               {
                   if(prim[j]==1)
                   {
                       if(nums[i]-j<nums[i+1])
                       {
                           nums[i]-=j;
                           flag=1;
                           break;
                       }
                   }
               }
               
               if(flag==0)return 0;
           }
       }
        
        return 1;
        
    }
};