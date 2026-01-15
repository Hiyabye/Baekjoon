#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Entry {
  string s;
  int a, b, c, d;
};

inline bool cmp(const Entry &x, const Entry &y) {
  if (x.a + x.c != y.a + y.c) return x.a + x.c > y.a + y.c;
  if (x.b + x.d != y.b + y.d) return x.b + x.d < y.b + y.d;
  return x.s < y.s;
}

void solve(void) {
  int n; cin >> n;
  vector<Entry> v(n);
  for (int i=0; i<n; i++) cin >> v[i].s >> v[i].a >> v[i].b >> v[i].c >> v[i].d;
  sort(v.begin(), v.end(), cmp);

  for (int i=0; i<n; i++) {
    cout << v[i].s << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}