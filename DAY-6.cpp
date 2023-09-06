
bool checkArmstrong(int n){
	//Write your code here
    
    string number = to_string(n);
 
    n = number.length();
    long long output = 0;
    for (char i : number)
        output = output + (long)pow((i - '0'), n);
 
    if (output == stoll(number))
        return true;
    else
        return false;
}
