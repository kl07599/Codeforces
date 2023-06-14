#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
ll t, n, k, a[200001], b[200001], j, sum;
void solve(){
	cin >> n >> k;
	for (ll i = 0; i < n; i++) cin >> a[i];
	for (ll i = 0; i < n; i++) cin >> b[i];
	sort(a,a+n);
	sort(b,b+n,greater<ll>());
	j = 0;
	while (k--){
		if (b[j] > a[j]) swap(b[j],a[j]);
		j++;
	}
	sum = 0;
	for (ll i = 0; i < n; i++) sum += a[i];
	cout << sum << endl;
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> t;
	while (t--) solve();
return 0;
}
