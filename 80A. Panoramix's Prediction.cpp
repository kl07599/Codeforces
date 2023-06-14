#include<bits/stdc++.h>
using namespace std;
bool snt(int n){
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0) return false;
			return true;
}
int n, m;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	cin >> n >> m;
	n += 1;
	while (!snt(n)) n++;
	if (m == n) cout << "YES\n";
	else cout << "NO\n";
return 0;
}



