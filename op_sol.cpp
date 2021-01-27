#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	// check if a number from 1 to n is equal to (n * (n + 1) / 2
	for (int i = 1; i <= n; i++) {
		if (i * (i + 1) / 2 == n) {
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";
	return 0; 
}
