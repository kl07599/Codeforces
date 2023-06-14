#include<bits/stdc++.h>
using namespace std;
int t, n, cnt, p;
int main(){
	cin >> t;
	while (t--){
		cin >> n;
		if (n == -1){
			if (p > 0) p--;
			else cnt++;
		}
		else p += abs(n);
	}
	cout << cnt;
return 0;
}

