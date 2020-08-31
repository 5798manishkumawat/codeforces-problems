
Problem Link - https://codeforces.com/contest/1398/problem/B

Solution----------


#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fo(i,n) for(ll i=0;i<n;i++)
#define pb push_back
using namespace std;
 
int main()
{
    boost;
    ll t=1;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        ll k=0;
        ll n=str.length();
        vector<ll>vt;
        fo(i,n)
        {
            while(str[i]=='1')
            {
                k++;
                i++;
            }
            if(k!=0)
            vt.pb(k);
            k=0;
        }
        sort(vt.begin(),vt.end(),greater<int>());
        ll d=0;
        ll p=vt.size();
        fo(i,p)
        {
            if(i%2==0)
            d+=vt[i];
           
        }
        cout<<d<<endl;	  
    }
 
return 0;
} 