#include<iostream>
#include<vector>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> cmn(26,50);
    for(int ctr=1;ctr<=n;ctr++){
        string s;cin>>s;
        vector<int> curr(26,0);
        for(char ch:s){
            curr[(ch-'a')]++;
        }
        for(int i=0;i<26;i++){
            cmn[i] = min(cmn[i],curr[i]);
        }
    }
    for(int i=0;i<26;i++){
        while(cmn[i]--)
        cout<<(char)('a'+i);
    }
}
int main(){
    solve();
    return 0;
}