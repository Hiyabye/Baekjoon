#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> factor(int n) {
  vector<int> ret;
  for (int i=1; i*i<=n; i++) {
    if (n % i) continue;
    ret.push_back(i);
    if (i*i != n) ret.push_back(n/i);
  }
  sort(ret.begin(), ret.end());
  return ret;
}

void solve(void) {
  int p, q; cin >> p >> q;

  vector<int> a = factor(p), b = factor(q);
  for (int i=0; i<a.size(); i++) {
    for (int j=0; j<b.size(); j++) {
      cout << a[i] << " " << b[j] << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}