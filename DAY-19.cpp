int findDuplicate(vector<int> &arr) 
{
    // Write your code here
	
    
    int x=0;
    for(int i=1;i<=arr.size()-1;i++){
        x ^= i;
    
    }
    
    for(int i=0;i<arr.size();i++){
        x ^= arr[i];
    }
    
    return x;
}
