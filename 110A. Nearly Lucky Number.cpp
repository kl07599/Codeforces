#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n, d;
int main(){
	cin >> n;
	while (n > 0){
		if (n % 10 == 4 || n % 10 == 7){
			d++;
			n /= 10;
		}
		else n /= 10;
	}
	if (d == 4 || d == 7) cout << "YES\n";
	else cout << "NO\n";
return 0;
}

