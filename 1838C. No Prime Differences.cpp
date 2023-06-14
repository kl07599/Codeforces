#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool is_prime(ll n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    		return true;
}
int main(){
    ll n, m; cin >> n >> m;
    ll grid[n][m];
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int num = grid[i - 1][j] + 1;
            while (true) {
                bool valid = true;
                if (j > 0 && is_prime(abs(num - grid[i][j - 1]))) {
                    valid = false;
                }
                if (i > 0 && is_prime(abs(num - grid[i - 1][j]))) {
                    valid = false;
                }
                if (valid) {
                    grid[i][j] = num;
                    break;
                }
                num++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}



