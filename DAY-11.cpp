#include <bits/stdc++.h> 
vector < vector < int > > numberPattern(int n) {

  // Write your code here

  vector< vector< int > >ans;
  int cnt=1;
  for(int i=0;i<n;i++){
    vector<int>temp;

    for(int k=0;k<n-i-1;k++){
      
      temp.push_back(-1);
    }
    for(int k=0;k<=i;k++){
      if(cnt > 9) cnt = 1;
      temp.push_back(cnt++);
    }
    ans.push_back(temp);
  }

  return ans;

}
