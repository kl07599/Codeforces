#include<bits/stdc++.h>
using namespace std;
int n, a[100001], sereja, dima, l, j, m;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	cin >> n;
	m = n;
	for (int i = 0; i < n; i++) cin >> a[i];
	while (m > 0){
		l++;
		if (l % 2 == 1){
			sereja += max(a[j],a[n-1]);
			if (a[j] > a[n-1]) j++;
			else n--;
		}
		else{
			dima += max(a[j],a[n-1]);
			if (a[j] > a[n-1]) j++;
			else n--;
		}
		m--;
	}
	cout << sereja << " " << dima;
return 0;
}



