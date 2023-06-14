#include<bits/stdc++.h>
using namespace std;
int n, k;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	cin >> n >> k;
	if (n - (k - 2*n) < 0) cout << 0;
    else if (n - (k - 2*n) > n) cout << n;
    else cout << n - (k - 2*n);
return 0;
}



