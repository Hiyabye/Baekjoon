#include <algorithm>
#include <iostream>
#include <map>
#include <utility>
#include <vector>
using namespace std;

map<int, vector<pair<int, long long>>> mp;
vector<long long> v;

void dfs(int a) {
	for (auto &[b, c] : mp[a]) {
		if (!b || v[b]) continue;
		v[b] = v[a] + c;
		dfs(b);
	}
}

void solve(void) {
	int n; cin >> n;
	for (int i=1; i<n; i++) {
  	int a, b; long long c; cin >> a >> b >> c; a--; b--;
  	mp[a].push_back({b, c}); mp[b].push_back({a, c});
	}

  v.assign(n, 0); dfs(0);
	cout << *max_element(v.begin(), v.end());
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	solve();
	return 0;
}