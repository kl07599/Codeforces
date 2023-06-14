#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool comp(pair <ll,ll> a, pair <ll, ll> b){
	return a.first > b.first;
}
vector <pair<ll,ll>> fr;
ll n, d, a, b, res, ans;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> d;
	for (int i = 0; i < n; i++){
		cin >> a >> b;
		fr.push_back(make_pair(a,b));
	}
	sort(fr.begin(),fr.end(),comp);
	for (int i = 0; i < n; i++){
		ans += fr[i].second;
		while (fr[0].first - fr[i].first >= d) ans -= fr[i].second;
		res = max(res, ans);
	}
	cout << res;
return 0;
}



