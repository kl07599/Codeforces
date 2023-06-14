#include<bits/stdc++.h>
using namespace std;
int n, a[100001], c;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	cin >> n;
	vector <int> pr, m, pe;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
		if (a[i] == 1) pr.push_back(i);
		else if (a[i] == 2) m.push_back(i);
		else if (a[i] == 3) pe.push_back(i);
	}
	c = min(min(pr.size(), m.size()), pe.size());
	cout << c << endl;
	for (int i = 0; i < c; i++){
		cout << pr[i] << " " << m[i] << " " << pe[i] << endl;
	}
return 0;
}
