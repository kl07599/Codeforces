#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){
	return (a.second < b.second);
}

int t, n, a[200001], b[200001];
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	cin >> t; 
	while (t--){
		vector <pair<int,int>> v;
		cin >> n;
		for (int i = 0; i < n ; i++){
			cin >> a[i] >> b[i];
			v.push_back(make_pair(a[i],b[i]));
		}
		sort(v.begin(),v.end(),sortbysec);
		int i = 0, x = 0, res = 0;
		while (n--){
			res += v[i].second;
			x++;
			for (int i = 0; i < v.size(); i++){
				if (v[i].first == x){
					x--;
					v.erase(v.begin() + i);
				}
			}
			i++;
		}
		cout << res << endl;
	}
return 0;
}



