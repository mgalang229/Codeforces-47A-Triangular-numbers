#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int cnt = 1;
	// view the image in this repository for better understanding
	// optional: read the link in this repository about the topic
	for (int i = 1; i <= 500; i += cnt) {
		if (n == i) {
			cout << "YES\n";
			return 0;
		}
		// continuously increment 'cnt'
		cnt++;
	}
	cout << "NO\n";
	return 0; 
}
