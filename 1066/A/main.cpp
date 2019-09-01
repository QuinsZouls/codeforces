#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n;
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cin>>n;
    for(int i=0;i<n;i++){
        int l,v,L,r;
        cin>>L>>v>>l>>r;
        int div=L/v, tren=l-r,div2=(l-1)/v,div3=r/v;
        if(tren<0)tren*=-1;
        tren++;
        int re=div3-div2;
        cout<<div-re<<"\n";

    }
    return 0;
}