
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumCostSubstring(string s, string chars, vector<int>& vals) {
        
        //03:20

        //simple kadanes algo

        int n=s.length();
        int m=vals.size();

        map<char,int> mp;
        
        for(int i=0;i<m;i++)
        {
            mp[chars[i]]=vals[i];
        }

        int ans=0;
        int maxi=0;

        for(auto &i:s)
        {
            if(mp.find(i)!=mp.end())
            {
                ans+=mp[i];
            }
            else
            {
                ans+=(i-'a')+1;
                
            }

            maxi=max(maxi,ans);
            if(ans<0)ans=0;
        }
        return maxi;
    }
};