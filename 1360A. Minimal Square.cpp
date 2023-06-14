#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
ll t, a, b;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> t;
	while (t--){
		cin >> a >> b;
		if (a < b) swap(a,b);
		if (a > b*2) cout << a*a << endl;
		else cout << b*b*4 << endl;
	}
return 0;
}
