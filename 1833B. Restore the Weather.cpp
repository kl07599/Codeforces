#include<bits/stdc++.h>
using namespace std;
int t, n, k, a[100001], b[100001];
int main(){
	cin >> t;
	while (t--){
		cin >> n >> k;
		vector<pair<int,int>> v;
	    vector<pair<int,int>> vt;
		for (int i = 0; i < n; i++){
			cin >> a[i];
			v.push_back(make_pair(a[i],i));
		}
		sort(v.begin(),v.end());
		for (int i = 0; i < n; i++) cin >> b[i];
		sort(b,b+n);
		for (int i = 0; i < n; i++) vt.push_back(make_pair(v[i].second,i));
		sort(vt.begin(),vt.end());
        for (int i = 0; i < n; i++) cout << b[vt[i].second] << " ";
        cout << endl;
	}
return 0;
}

