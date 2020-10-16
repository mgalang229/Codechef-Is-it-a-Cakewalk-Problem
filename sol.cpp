#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int cnt = 0;
		for (int i = 0; i < 100; i++) {
			int a;
			cin >> a;
			if (a <= 30) {
				cnt++;
			}
		}
		cout << (cnt >= 60 ? "yes" : "no") << '\n';
	}
	return 0;
}
