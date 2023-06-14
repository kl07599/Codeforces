#include<bits/stdc++.h>
using namespace std;
int t, n, a[100001], c;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	cin >> t;
	while (t--){
		vector <pair<int,int>> p, b;
		cin >> n;
		for (int i = 0; i < n; i++){
			cin >> a[i];
			p.push_back(make_pair(a[i],i));
		}
		sort(p.begin(),p.end());
		sort(a,a+n,greater<int>());
		for (int i = 0; i < n; i++) b.push_back(make_pair(p[i].second,a[i]));
		sort(b.begin(),b.end());
		for (int i = 0; i < n; i++) cout << b[i].second << " ";
		cout << endl;
	}
return 0;
}



