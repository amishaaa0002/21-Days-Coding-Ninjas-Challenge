#include <bits/stdc++.h> 
vector<vector<int>> fahrenheitToCelsius(int s, int e, int w)
{
	//type your code here
    
    vector<vector<int>>ans;
    
    for(int f=s; f<=e ; f+=w){
        
        int c=(f-32)*5/9;
        ans.push_back({f,c});
    }
    return ans;
}
