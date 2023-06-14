#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
unsigned long long int t, n;
void solve(){
	cin >> n;
	if (n <= 4) cout << "Bob\n";
	else cout << "Alice\n";
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> t;
	while (t--) solve();
return 0;
}

