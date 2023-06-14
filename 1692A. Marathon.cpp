#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	ll t; cin >> t;
	while (t--){
		ll a[200001], cnt = 0;
		for (int i = 0; i < 4; i++){
			cin >> a[i];
			if (a[i] > a[0]) cnt++;
		}
		cout << cnt << endl;
	}
return 0;
}



