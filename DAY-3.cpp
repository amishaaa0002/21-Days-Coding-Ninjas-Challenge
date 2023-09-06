#include<iostream>
using namespace std;

int main() {
	// Write your code here

	int n;
	cin>>n;
	int eve=0,odd=0;

	while(n){

		int rem=n%10;
		n=n/10;
		if(rem%2==0){
			eve+=rem;
		}
		else{
			odd+=rem;
		}

	}

	cout<<eve<<" "<<odd<<endl;
	
}
