#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
      // 05:28
    // simple but i am sleepy
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int maxi=0;
        int ans=INT_MAX;

        for(auto &i:divisors)
        {
            int cnt=0;
            for(auto &j:nums)
            {
                if(j%i==0)cnt++;
            }

            cout<<cnt<<endl;

            if(cnt>=maxi)
            {
                if(cnt==maxi)
                ans=min(ans,i);
                else
                ans=i;
                maxi=cnt;
            }
        }

        return ans;
    }
};