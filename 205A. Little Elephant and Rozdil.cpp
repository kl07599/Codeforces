#include<bits/stdc++.h>
using namespace std;
int n, a[100001], cnt;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	cin >> n;
	vector<pair<int,int>> v;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
		v.push_back(make_pair(a[i],i));
	}
	sort(v.begin(),v.end());
	for (int i = 0; i < v.size(); i++)
		if (v[i].first == v[0].first) cnt++;
	if (cnt == 1) cout << v[0].second;
	else cout << "Still Rozdil\n";
return 0;
}



