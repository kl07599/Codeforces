#include<bits/stdc++.h>
using namespace std;
int t, a, b, cnt;
int main(){
	cin >> t;
	while (t--){
		cin >> a >> b;
		cnt = abs(a-b);
		if (cnt == 0) cout << cnt << endl;
		else{
			if (cnt % 10 == 0) cout << cnt / 10 << endl;
			else cout << (cnt / 10) + 1 << endl;
		}
	}
return 0;
}

