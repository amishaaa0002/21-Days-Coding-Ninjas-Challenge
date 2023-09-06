string lookAndSaySequence(int n) 
{
    // Write your code here.

    if( n == 0 ) return "";
            string ans = "1";
                if( n == 1 ) return ans;
                n = n-1; // starting from n=2
                while(n--) {
                string t = "" ;
                for(int i=0 ; i<ans.size() ; i++) {
                int cnt = 1;
                while(i < ans.size()-1 && ans[i] == ans[i+1]) {
                cnt++;
                i++;}
                 t += to_string(cnt) + ans[i];
                 }
                ans = t;
                }
                return ans;
}