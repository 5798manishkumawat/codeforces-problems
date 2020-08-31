
Problem Link - https://codeforces.com/contest/1398/problem/A

Solution----------


#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fo(i,n) for(ll i=0;i<n;i++)
using namespace std;
 
int main()
{
    boost;
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n,d,m,x;
        cin>>n;
        
        ll a[n];
        
        fo(i,n)
        cin>>a[i];
        
        ll sum=a[0]+a[1];
        
        if(a[n-1]<sum)
        cout<<"-1"<<endl;
        else
        {
            cout<<"1 2 "<<n<<endl;
        }  
    }
return 0;
} 