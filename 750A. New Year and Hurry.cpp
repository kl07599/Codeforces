#include<bits/stdc++.h>
using namespace std;
int n, k, mi, math;
int main(){
	cin >> n >> k;
	mi = 240 - k;
	for (int i = 1; i <= n; i++){
		if (mi >= 5*i){
			math++;
			mi = mi - 5*i;
		}
	}
	cout << math;
return 0;
}

