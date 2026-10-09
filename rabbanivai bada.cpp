//@CodeByNahid

#include <bits/stdc++.h>

using namespace std;





void solve() {

	int x, y;

	cin >> x >> y;

 

	vector<int> a(x), b(y);

	for (int i = 0; i < x; i++) {

		cin >> a[i];

	}

	for (int i = 0; i < y; i++) {

		cin >> b[i];

	}

 

	for (int i = 0; i < x; i++) {

		for (int j = 0; j < y; j++) {

			if (a[i] == b[j]) {

				cout << "YES\n";

				cout << 1 << " " << a[i] << "\n";

				return;

			}

		}

	}

	cout << "NO\n";

}

 

int main() {

   ios::sync_with_stdio(false);

   cin.tie(nullptr);

   int t; cin >> t; while (t--) {

        solve();

    }

return 0;

}
