#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline vector<int> init(int a, int b, int c, int d) {
	int e = 10 - a - b - c - d;
	vector<int> ret;
	while (a--) ret.push_back(1);
	while (b--) ret.push_back(2);
	while (c--) ret.push_back(3);
	while (d--) ret.push_back(4);
	while (e--) ret.push_back(5);
	return ret;
}

inline bool check(const vector<int> &p, const vector<int> &q) {
	for (int i=2; i<10; i++) {
		if (q[i-2] == q[i-1] && q[i-1] == q[i]) return false;
	}
	int cnt = 0;
	for (int i=0; i<10; i++) cnt += p[i] == q[i];
	return cnt >= 5;
}

void solve(void) {
	vector<int> p(10);
	for (int i=0; i<10; i++) cin >> p[i];

	int ans = 0;
	for (int a=0; a<=10; a++) for (int b=0; a+b<=10; b++) for (int c=0; a+b+c<=10; c++) for (int d=0; a+b+c+d<=10; d++) {
		vector<int> q = init(a, b, c, d);
		do {
			if (check(p, q)) ans++;
		} while (next_permutation(q.begin(), q.end()));
	}
	cout << ans;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	solve();
	return 0;
}