#include<bits/stdc++.h>
using namespace std;
int t, n;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	cin >> t;
	while (t--){
		cin >> n;
		for (int i = 0; i < n; i++) cout << 2*(i+1) << " ";
		cout << endl;
	}
return 0;
}



