#include<bits/stdc++.h>
using namespace std;
int n, a, b, res, pp;
int main(){
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> a >> b;
		pp += (b - a);
		res = max(res, pp);
	}
	cout << res; 
return 0;
}

