#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    map<int,int> m;
    for(int i=1;i<=n;i++){
        int curr;cin>>curr;
        m[curr]++;

    }
    int ans=0;
    for(auto[num,cnt]: m){
        if(cnt&1){
            ans++;
        }
    }
    cout<<ans<<endl;
}

int main(){
    solve();
    return 0;
}