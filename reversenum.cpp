#include<bits/stdc++.h>
using namespace std;
int main()
{
    //int n,last,rev=0;
    string str,rev;
    cout<<"enter a number for which you want the reverse";
    //cin>>n;
    cin>>str;
    // while(n>0)
    // {
    //     last=n%10;
    //     n=n/10;
    //     cout<<n<<endl;
    //     rev=(rev*10)+last;
    //     cout<<rev;
    // }
    //running a reverse loop for string
    for(int i=str.size();i>=0;i--)
    {
        // rev=rev+str[i];
        rev.push_back(str[i]);
    }
    cout<<rev;
    
    
}