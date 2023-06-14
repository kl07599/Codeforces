#include<bits/stdc++.h>
using namespace std;
int n, p, q, x[100001], cnt;
int main(){
	cin >> n;
	cin >> p;
	for (int i = 0; i < p; i++) cin >> x[i];
	cin >> q;
	for (int i = p; i < p+q; i++) cin >> x[i];
	sort(x,x+p+q);
	for (int i = 0; i < p+q; i++)
		if (x[i] != x[i+1]) cnt++;
	if (cnt == n) cout << "I become the guy.\n";
	else cout << "Oh, my keyboard!\n";
return 0;
}

