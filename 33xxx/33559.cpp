#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  map<int, int> mp1, mp2;
  for (int i=0; i<n; i++) {
    int x; cin >> x; mp1[x]++;
  }
  for (int i=0; i<n; i++) {
    int x; cin >> x; mp2[x]++;
  }

  vector<int> v, a, b;
  for (const auto &[x, y] : mp1) {
    int k = min(y, mp2[x]);
    for (int i=0; i<k; i++) v.push_back(x);
    for (int i=k; i<mp1[x]; i++) a.push_back(x);
    for (int i=k; i<mp2[x]; i++) b.push_back(x);
  }
  for (const auto &[x, y] : mp2) {
    if (mp1.find(x) != mp1.end()) continue;
    for (int i=0; i<y; i++) b.push_back(x);
  }

  cout << v.size() << "\n";
  for (int x : v) cout << x << " ";
  for (int x : a) cout << x << " ";
  cout << "\n";
  for (int x : v) cout << x << " ";
  for (int x : b) cout << x << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}