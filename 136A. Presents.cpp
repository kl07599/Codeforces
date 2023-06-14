#include<bits/stdc++.h>
using namespace std;
int n, a[100001];
int main(){
	vector<pair<int,int>> p;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
		p.push_back(make_pair(a[i],i));
	}
	sort(p.begin(),p.end());
	for (int i = 0; i < n; i++) cout << p[i].second + 1 << " ";
return 0;
}

