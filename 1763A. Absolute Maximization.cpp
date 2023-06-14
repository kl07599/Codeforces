#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
unsigned long long int t, n, a[200001];
void solve(){
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	int ans = 0;
	for (int i = 0; i < n; i++){
		int cnt = 0;
		for (int j = i + 1; j < n; j++){
			if (a[i] > a[j]) cnt++;
		}
		ans += (cnt % 2);
	}
	cout << ans << endl;
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> t;
	while (t--) solve();
return 0;
}

