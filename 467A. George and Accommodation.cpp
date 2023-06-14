#include<bits/stdc++.h>
using namespace std;
int n, p, q, cnt;
int main(){
	cin >> n;
	while (n--){
		cin >> p >> q;
		if (p <= q-2) cnt++;
	}
	cout << cnt;
return 0;
}

