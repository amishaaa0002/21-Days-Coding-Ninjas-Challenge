#include <bits/stdc++.h> 
#include <utility>

pair<char, int> averageMarks(char firstLetterOfName, int m1, int m2, int m3) {
    // Write your code here.
    int avg = ( m1+m2+m3)/3;
    
    pair<char,int>pt ={firstLetterOfName , avg};
    return pt;
}
