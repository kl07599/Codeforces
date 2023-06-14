#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
unsigned long long int a[200001][200001];
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	for (int i = 1; i <= 5; i++){
		for (int j = 1; j <= 5; j++){
			cin >> a[i][j];
			if (a[i][j] == 1){
				ans = abs(i-3) + abs(j-3);
			}
		}
	}
	cout << ans;
return 0;
}

