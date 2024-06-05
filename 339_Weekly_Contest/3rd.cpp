#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
         //18:18

         //simple greedy problem and just the big 
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
        int n=reward1.size();

        vector<pair<int,pair<int,int>>> v;

        for(int i=0;i<n;i++)
        {
            int diff=reward2[i]-reward1[i];
            v.push_back({diff,{reward2[i],reward1[i]}});
        }

        sort(v.begin(),v.end());

        int ans=0;

        for(auto &i:v)
        {
            int r2=i.second.first;
            int r1=i.second.second;

            if(k>0)
            {
                ans+=r1;
            }
            else
            ans+=r2;

            k--;
        }
        return ans;
    }
};