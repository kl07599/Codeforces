#include<bits/stdc++.h>
using namespace std;
int t, n, a[200001];
int main(){
	cin >> t;
	while (t--){
		int max = 1, cnt = 1;
		cin >> n;
		for (int i = 0; i < n*2; i++) cin >> a[i];
		for (int i = 0; i < n*2; i++){
			if (a[i] == a[i+1]){
				cnt++;
				if (cnt > max) max = cnt;
			}
			else cnt = 1;
		}
		cout << max << endl;
 	}
return 0;
}
