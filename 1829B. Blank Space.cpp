#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t, n, res, cnt;
	cin >> t;
	while (t--){
    	res = 0, cnt = 0;
    	cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < n; i++){
			if (a[i] == 1) cnt = 0;
    		else{
        		cnt++;
        		res = max(res,cnt);
    		}
		}
		cout << res << endl;
	}
	return 0;
}
