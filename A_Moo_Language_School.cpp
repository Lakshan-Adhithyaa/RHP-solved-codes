#include<iostream>
#include<vector>
using namespace std;
void solve(){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int f=n/k;
    vector<bool> own(f,false);
    for(unsigned int i=0;i<s.size();i++){
        if(s[i] == '0'){
            int farmidx = i/k;
            own[farmidx] = true;
        }
    }
    int cnt=0;
    for(int i=0;i<f;i++){
        if(!own[i]) cnt++;
    }
    cout<<cnt<<endl;
}

int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}