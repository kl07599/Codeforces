#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
unsigned long long int t, n, a[200001];
void solve(){
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	int cnt = 0;
	for (int i = 0; i < n - 1; i++){
		if (a[i] > a[i+1]){
			cnt++;
			i++;
		}
	}
	cout << cnt << endl;
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> t;
	while (t--) solve();
return 0;
}

