#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   #define ll long long
    long long makeSubKSumEqual(vector<int>& arr, int k) {
         
        // 11 : 12
        // simple gcd(circular) and median problem


        int n=arr.size();
         k=__gcd(n,k);  // This is cool cause it is circular

        vector<int> vis(n,0);
        ll ans=0;

        for(int i=0;i<n;i++)
        {
            if(vis[i])continue;

            vector<int> v;


            for(int j=i;j<n;j+=k)
            {
                  vis[j]=1;
                  v.push_back(arr[j]);
            }

            sort(v.begin(),v.end());

            int mid=v.size()/2;

            for(auto &i:v)
            {
                ans+=abs(i-v[mid]); // making the elements equal to the median
            }
        }

        return ans;

    }
};