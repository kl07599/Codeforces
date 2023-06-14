#include<bits/stdc++.h>
using namespace std;
int t, n;
int main(){
	cin >> t;
	while (t--){
		cin >> n;
		if ((n/2) % 2 == 1) cout << "NO";
		else{
			cout << "YES\n";
			for (int i = 1; i <= n/2; i++) cout << i*2 << " ";
			for (int i = 1; i <= n/2; i++){
				if (i < n/2) cout << i*2 - 1 << " ";
				else cout << i*2 - 1 + n/2;
			}
		}
		cout << endl;
	}
return 0;
}

