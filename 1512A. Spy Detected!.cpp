#include<bits/stdc++.h>
using namespace std;
int t, n, a[100001], cnt[100001];
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t;
    while (t--){
    	cin >> n;
		for (int i = 1; i <= n; i++){
			cin >> a[i];
			cnt[a[i]]++;
		}
		for (int i = 1; i <= n; i++){
			if (cnt[a[i]] == 1){
				cout << i << endl;
				break;
			}
		}
		for (int i = 1; i <= n; i++) cnt[a[i]] = 0;
	}
return 0;
}
