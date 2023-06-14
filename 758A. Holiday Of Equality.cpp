#include<bits/stdc++.h>
using namespace std;
int n, a[100001], cnt;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a,a+n,greater<int>());
	for (int i = 1; i < n; i++) cnt += (a[0] - a[i]);
	cout << cnt;
return 0;
}



