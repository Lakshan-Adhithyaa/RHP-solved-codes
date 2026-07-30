#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long int
using namespace std;

int find(vector<int>& ldr,int val){ 
	if(ldr[val] != val){
		ldr[val] = find(ldr,ldr[val]);
	}
	return ldr[val];
}
void join(vector<int>& ldr , int lt, int rt){ 
	int ldrlt = find(ldr,lt);
	int ldrrt = find(ldr,rt);
	ldr[ldrrt] = ldrlt;
}

void solve(){
int N,M ; cin>>N>>M;
vector<int> ldr(N+1,0);

for(int i = 1;i<=N;i++) ldr[i] = i;
vector<pair<int,int>> edges(M);
for(int e = 1; e<= M ; e++){
	int lt,rt;cin>>lt>>rt;
	edges[e] = {lt,rt};
		
	join(ldr,lt,rt);
}

vector<int> gcnt(N+1,0) , ecnt(N+1,0);
for(int node = 1;node<=N;node++){
	int uldr = find(ldr,node);
	gcnt[uldr]++;
}
for(auto[lt,rt] : edges){
	int uldr = find(ldr,rt);
	ecnt[uldr]++;
}
ll ans = 0;
for(int node = 1;node<=N;node++){
	int ncnt = gcnt[node];
	ans += (1LL * ncnt * (ncnt-1))/2 - ecnt[node];
}
cout<<ans;
}
int main(){
	solve();
	return 0;
}
