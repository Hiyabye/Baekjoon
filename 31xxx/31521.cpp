#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

bool dupl(int n, const vector<int> &v) {
  unordered_set<int> s;
  for (int i=0; i<n; i++) {
    if (s.find(v[i]) != s.end()) return true;
    s.insert(v[i]);
  }
  return false;
}

inline int nPr(int n, int r) {
  int ret = 1;
  for (int i=n; i>n-r; i--) ret *= i;
  return ret;
}

inline int pow6(int n) {
  int ret = 1;
  while (n--) ret *= 6;
  return ret;
}

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int x = dupl(n, v) ? 0 : nPr(6-n, 4-n);
  cout << x << " " << pow6(4-n)-x;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}