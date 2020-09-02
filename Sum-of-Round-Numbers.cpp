
Problem Link - https://codeforces.com/contest/1352/problem/A


Solution-------



#include<bits/stdc++.h>
#define ll long long int
#define input freopen("input.txt","r",stdin)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define deb(x) cout<<"<<<<>>>>"<<x;
#define endl "\n"
ll p = 1000000007;
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int x=0;
        cin>>n;
        vector<int> v;
        while(n>0)
        {
            int a = n%10;
            n = n/10;
            int b = a*(pow(10,x));
            if(b!=0)
                v.push_back(b);
            x++;
        }
        cout<<v.size()<<endl;
        for(auto i: v)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
	return 0;
}
