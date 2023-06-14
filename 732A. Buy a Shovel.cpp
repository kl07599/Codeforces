#include<bits/stdc++.h>
using namespace std;
int k, l, r, cnt = 0;
int main(){
	cin >> k >> r;
	l = k;
	if (k % 10 == r) cout << 1;
	else{
		while (k % 10 != r){
			cnt++;
			k = l*cnt;
			if (k % 10 == 0) break;
			else continue;
		}
		cout << cnt;
	}
return 0;
}

