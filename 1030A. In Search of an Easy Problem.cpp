#include<bits/stdc++.h>
using namespace std;
int n, a, cnt;
int main(){
	cin >> n;
	while (n--){
		cin >> a;
		if (a == 1) cnt++;
	}
	if (cnt == 0) cout << "EASY\n";
	else cout << "HARD\n";
return 0;
}

