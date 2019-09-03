#include <bits/stdc++.h>

using namespace std;

int n,m,q,t1,t2,gc,sol;
set<int> all;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>n>>m>>q;
    gc=__gcd(n,m);
    for(int i=1;i*i<=gc;i++)
    {
        if(gc%i==0)all.insert(i),all.insert(gc/i);
    }
    while(q--)
    {
        sol=-1;
        cin>>t1>>t2;
        for(auto u : all)
            if(u>=t1 && u<=t2)sol=u;
         cout<<sol<<"\n";
    }
    return 0;
}