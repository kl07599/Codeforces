#include<bits/stdc++.h>
using namespace std;
int t, n, a[100001], even = 0, odd = 0;
int main(){
	cin >> t; 
	while (t--){
		cin >> n;
		for (int i = 0; i < n; i++){
			cin >> a[i];
			if (a[i] % 2 == 0) even += a[i];
			else odd += a[i];
		}
		if (even > odd) cout << "YES" << endl;
		else cout << "NO" << endl;
		even = 0; odd = 0;
	}
return 0;
}

