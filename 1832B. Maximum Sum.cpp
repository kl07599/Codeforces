#include<bits/stdc++.h>
using namespace std;
int t, n, k, a[200001];
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	cin >> t;
	while (t--){
		vector <int> v;
		cin >> n >> k;
		int sum = 0;
		for (int i = 0; i < n; i++){
			cin >> a[i];
			sum += a[i];
			v.push_back(a[i]);
		}
		sort(v.begin(),v.end());
		while (k--){
			if (v[0] + v[1] > v[v.size()-1]){
				sum -= v[v.size()-1];
				v.pop_back();
			}
			else{
				sum = sum - (v[0] + v[1]);
				v.erase(v.begin(),v.begin()+1);
			}
		}
//		cout << sum << endl;
	}
return 0;
}



