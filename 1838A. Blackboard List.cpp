#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	ll n, a, cnt, ans = INT_MAX, ans1 = INT_MIN;
	cin >> n;
	cnt = 1;
	while (n--){
		cin >> a;
		if (a < 0){
			cnt = 0;
			ans = min(ans,a);
		}
		else ans1 = max(ans1,a);
	}
		if (!cnt) cout << ans << endl;
		else cout << ans1 << endl;
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	ll t; cin >> t;
	while (t--) solve();
return 0;
}
