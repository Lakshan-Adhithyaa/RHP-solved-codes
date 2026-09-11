#include<bits/stdc++.h>
using namespace std;


void gi(vector<int>& arr,int n){
    for(int i=0;i<n;i++) cin >> arr[i];
    sort(arr.begin(),arr.end());
}
void solve(){
    int n;cin>>n;
    vector<int> u(n),m(n),l(n);
    gi(u,n);gi(m,n);gi(l,n);
    vector<ll> pmid(n,0);
    for(int i=0;i<n;i++){
        auto it=upper_bound(l.begin(),l.end(),m[i]);
        if(it != l.end()){
            pmid[i] =l.end()-it;
        
        }
    }
    for(int i=1;i<n;i++) pmid[i] += pmid[i-1];
    ll ans=0;
    for(int i=0;i<n;i++){
        auto it=upper_bound(m.begin(),m.end(),u[i]);
        if(it != m.end()){
            int midx = it-m.begin();
            ans+= pmid[n-1]-(midx==0?0:pmid[midx-1]);
        }
    }
    cout<<ans<<endl;
}
int main(){

}