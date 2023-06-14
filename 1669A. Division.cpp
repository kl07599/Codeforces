#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
unsigned long long int t;
void solve(){
	int n;  cin >> n;
	if (n > 1899) cout << "Division 1\n";
	else if (n > 1599 && n < 1900) cout << "Division 2\n";
	else if (n > 1399 && n < 1600) cout << "Division 3\n";
	else cout << "Division 4\n";
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> t;
	while (t--) solve();
return 0;
}

