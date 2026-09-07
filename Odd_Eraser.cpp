#include<bits/stdc++.h>
using namespace std;
int hcf(int a,int b){
    if(b==0) return a;
    return hcf(b,a%b);
}
void solve(){
    int n;cin>>n;

    while(n--){
        int x;cin>>x;
        vector<int> nums(x);
        for(int i=0;i<x;i++) cin>>nums[i];
        cout<<hcf(nums[0],nums[x-1])<<endl;
    }
}
int main(){
    solve();
    return 0;
}