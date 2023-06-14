#include<bits/stdc++.h>
using namespace std;
int n, a, b, cnt;
int main(){
	cin >> n;
	while (n--){
		cin >> a >> b;
		if (a % b == 0) cout << "0\n";
		else cout << b - a%b << endl;
	}
return 0;
}

