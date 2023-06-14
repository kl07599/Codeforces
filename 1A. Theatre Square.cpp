#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m, a;
int main(){
	cin >> n >> m >> a;
	if (n % a == 0) n /= a;
	else n = n/a + 1;
	if (m % a == 0) m /= a;
	else m = m/a + 1;
	cout << n*m;
return 0;
}

