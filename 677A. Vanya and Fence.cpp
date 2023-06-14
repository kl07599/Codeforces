#include<bits/stdc++.h>
using namespace std;
int n, h, a, cnt;
int main(){
	cin >> n >> h;
	while (n--){
		cin >> a;
		if (a <= h) cnt += 1;
		else cnt += 2;
	}
	cout << cnt;
return 0;
}

