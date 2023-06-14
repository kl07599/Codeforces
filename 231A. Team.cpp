#include<bits/stdc++.h>
using namespace std;
int n, a, b, c, d, dem;
int main(){
	cin >> n;
	while (n--){
		d = 0;
		cin >> a >> b >> c;
		if (a == 1) d++;
		if (b == 1) d++;
		if (c == 1) d++;
		if (d > 1) dem += 1;
	}
	cout << dem;
return 0;
}

