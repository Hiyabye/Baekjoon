#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

bool check(const unordered_set<int> &a, const vector<int> &b) {
  for (int x : b) {
    if (a.find(x) != a.end()) return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;
  unordered_set<int> a;
  while (n--) {
    int x; cin >> x;
    a.insert(x);
  }
  int m; cin >> m;

  int ans = 0;
  while (m--) {
    int k; cin >> k;
    vector<int> b(k);
    for (int i=0; i<k; i++) cin >> b[i];
    if (check(a, b)) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}