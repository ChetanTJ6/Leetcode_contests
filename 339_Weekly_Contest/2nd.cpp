#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

     // 07:15
     //simple map counting problem
     
    vector<vector<int>> findMatrix(vector<int>& nums) {
        
        vector<vector<int>> ans;

        int n=nums.size();

        map<int,int> mp;
        for(auto &i:nums)mp[i]++;

        while(!mp.empty())
        {
            vector<int> v;
            vector<int> er;
            for(auto [x,y]:mp)
            {
                cout<<x<<" "<<y<<endl;
                v.push_back(x);
                mp[x]--;
                if(mp[x]==0)er.push_back(x);
            }
            // We cannot erase the map while traversing itself cause it reappers again the already visited values
            for(auto &i:er)
              mp.erase(i);
            
            ans.push_back(v);
        }
        return ans;
    }
};