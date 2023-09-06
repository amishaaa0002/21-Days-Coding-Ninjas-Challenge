#include <bits/stdc++.h> 
bool checkDiff(int *arr,int N,int K)
{
    // Write your code here.

    vector<int> a(arr,arr+N);
    int n=N;
    for(int i=0;i<n;i++){
        a[i] += K;

    }

    unordered_map<int,int>mp;


    for(int i=0;i<n;i++){
        mp[arr[i]]=i;
    }

    for(int i=0;i<n;i++){
        if(mp.count(a[i])>0 && i != mp[a[i]]){
            return true;
        }

    }

    return false;
}
