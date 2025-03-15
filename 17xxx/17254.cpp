#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Key {
  int a, b;
  char c;
};

inline bool cmp(const Key &x, const Key &y) {
  if (x.b != y.b) return x.b < y.b;
  return x.a < y.a;
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<Key> k(m);
  for (int i=0; i<m; i++) cin >> k[i].a >> k[i].b >> k[i].c;
  sort(k.begin(), k.end(), cmp);

  for (int i=0; i<m; i++) {
    cout << k[i].c;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}