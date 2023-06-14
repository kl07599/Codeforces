#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
ll t, n, a[200001], cnt;
void solve(){
	cin >> n;
	for (ll i = 0; i < n; i++) cin >> a[i];
	sort(a,a+n,greater<ll>());
	cout << a[0] - a[n-1] << endl;
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> t;
	while (t--) solve();
return 0;
}

