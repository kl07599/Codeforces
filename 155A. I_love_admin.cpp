#include<bits/stdc++.h>
using namespace std;
bool kt(int a[], int n, int t){
	int ct = -1;
	for (int i = 1; i <= n; i++)
		if (a[i] == t) ct++;
	if (ct == 0) return true;
		else return false;
}
int n, a[100001], cnt;
int main(){
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 2; i <= n; i++){
		if (kt(a,i,a[i]) == true){
		    if (a[i] == *min_element(a+1,a+1+i) || a[i] == *max_element(a+1,a+1+i)) cnt++;
		}	
	}	
	cout << cnt;
return 0;
}

