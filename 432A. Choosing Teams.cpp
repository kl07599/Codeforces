#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
unsigned long long int n, a[2000001], k, cnt;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> k;
	for (int i = 0; i < n; i++){
		cin >> a[i];
		if (a[i] + k <= 5) cnt++;
	}
	cout << cnt / 3 << endl;
return 0;
}

