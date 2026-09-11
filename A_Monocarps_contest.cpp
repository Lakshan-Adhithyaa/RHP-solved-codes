#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> arr(n);
    int oc=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        oc+=arr[i];
    }
    int zc=n-oc;
    if(zc<2){
        cout<<"-1\n";return ;
    }
    int ans=0;
    if(arr[0]) ans++;
    if(arr[n-1]) ans++;
    cout<<ans<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false
        solve();
    }
});
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){