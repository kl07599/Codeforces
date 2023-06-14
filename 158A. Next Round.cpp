#include<bits/stdc++.h>
using namespace std;
int n, k, a[100001], cnt;
int main(){
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++)
    	if (a[i] >= a[k-1] && a[i] != 0) cnt++; 
    cout << cnt;
    return 0;
}
