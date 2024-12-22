//break -goes out of last for loop
//continue -goes above last for loop
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,last;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int sum=0;
	    while(n>0)
	    {
	        last=n%10;
    	    sum=sum+last;
    	    n=n/10;
    	    
	        
	    }
	    cout<<sum<<endl;
	    
	    
	    
	}

}
