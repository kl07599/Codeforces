#include<bits/stdc++.h>
using namespace std;
int t, x, k;
int main(){
	cin >> t;
	while (t--){
		cin >> x >> k;
		if (x % k != 0) cout << "1\n" << x << endl;
		else cout << "2\n" << 1 << " " << x - 1 << endl;
	}
return 0;
}



