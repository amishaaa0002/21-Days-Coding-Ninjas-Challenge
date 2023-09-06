#include <bits/stdc++.h> 
#include <vector>

vector < int > termsOfAP(int x) {
    // Write your code here.

    vector<int>ans;
    int count=0;
    int res=1;
    int no=1;

     while(count<x)
        {
            res=3*no+2;
            if(res%4!=0)
            {
                ans.push_back(res);
                count++;
            }
        no++;
        }
        return ans;
}
