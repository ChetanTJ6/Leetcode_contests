#include <bits/stdc++.h>
using namespace std;

// Easy but i took time to make it general rather than writing if else cases
// 12:47
class Solution {
public:
    int addMinimum(string word) {
        int n=word.size();
        char cur='a';
        int cnt=0;
        for(auto &ch:word)
        {
            int k=ch-cur;
            if(k>0)
            cnt+=k;
            else if(k<0)
            {
                cnt+=3+k;
            }
            
            int diff=ch-'a';
            diff=(diff+1)%3;
            cur='a'+diff;
         
        }
        if(cur!='a')
        cnt+='c'-cur+1;

        return cnt;
    }
};