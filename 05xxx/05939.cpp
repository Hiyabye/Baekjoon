#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Cow {
  int h, m, s;
};

inline bool cmp(const Cow &a, const Cow &b) {
  if (a.h != b.h) return a.h < b.h;
  if (a.m != b.m) return a.m < b.m;
  return a.s < b.s;
}

void solve(void) {
  int n; cin >> n;
  vector<Cow> c(n);
  for (int i=0; i<n; i++) cin >> c[i].h >> c[i].m >> c[i].s;
  sort(c.begin(), c.end(), cmp);

  for (int i=0; i<n; i++) {
    cout << c[i].h << " " << c[i].m << " " << c[i].s << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}