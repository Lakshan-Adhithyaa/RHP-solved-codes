#include<iostream>
#include<vector>

using namespace std;
#define ll long long int
void solve(){
    ll x,y,k;
    cin>>x>>y>>k;
    ll ans=0,ctr = 0;
    while(ctr<k){
    ll rem = y%x;
    if(rem == y-x){
    break;
    }
    ans += rem;ctr++;x++;y++;
    }
    if(k>ctr){
        ans += (k-ctr) * (y-x);
    }
    cout<<ans<<endl;
}

int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}