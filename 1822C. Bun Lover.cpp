#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll t, n;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	cin >> t;
	while (t--){
		cin >> n;
		cout << n*(n+1)+(n+2) << endl;
	}
return 0;
}



