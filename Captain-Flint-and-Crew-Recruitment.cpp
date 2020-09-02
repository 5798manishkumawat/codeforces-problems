
Problem Link - https://codeforces.com/contest/1388/problem/A


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
      ll n;
      cin>>n;
      
      if(n<=30)
      cout<<"NO"<<endl;
      else if(n==36)
      {
          cout<<"YES"<<endl;
          cout<<"6 10 15 5"<<endl;
      }
      else if(n==40)
      {
          cout<<"YES"<<endl;
          cout<<"6 10 15 9"<<endl;
      }
      else if(n==44)
      {
          cout<<"YES"<<endl;
          cout<<"6 10 15 13"<<endl;
      }
      else
      {
           ll d=n-30;
          cout<<"YES"<<endl;
          cout<<"6 10 14 "<<d<<endl;
      }
    }
   
	return 0;
}