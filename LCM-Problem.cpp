
Problem Link - https://codeforces.com/contest/1389/problem/A


Solution-------



#include<bits/stdc++.h>
#define ll long long int
#define fo(i,n) for(ll i=0;i<n;i++)
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
                    ll r=a*2;
                    if(a<=r && r<=b)
                    {
                        cout<<a<<" "<<r<<endl;
                    }
                    else
                    cout<<"-1 -1"<<endl;
        
    }
   
	return 0;
}