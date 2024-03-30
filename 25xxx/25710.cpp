#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int calc(int x, int y) {
  int prod = x * y, ret = 0;
  while (prod) {
    ret += prod % 10;
    prod /= 10;
  }
  return ret;
}

void solve(void) {
  int n; cin >> n;
  unordered_map<int, int> m;
  for (int i=0; i<n; i++) {
    int x; cin >> x;
    m[x]++;
  }

  vector<int> a;
  for (auto it : m) {
    for (int i=0; i<min(it.second, 2); i++) a.push_back(it.first);
  }

  int ans = 0;
  for (int i=0; i<a.size()-1; i++) {
    for (int j=i+1; j<a.size(); j++) {
      ans = max(ans, calc(a[i], a[j]));
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}