#include<bits/stdc++.h>
using namespace std;
int k, n, w, money;
int main(){
	cin >> k >> n >> w;
	for (int i = 1; i <= w; i++) money += k*i;
	if (money <= n) cout << "0\n";
	else cout << money - n;
return 0;
}

