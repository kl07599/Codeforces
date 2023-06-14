#include<bits/stdc++.h>
using namespace std;
int t, a, b, c;
int main(){
	cin >> t;
	while (t--){
		cin >> a >> b >> c;
		if (a + b == c) cout << "+\n";
		else cout << "-\n";
	}
return 0;
}

