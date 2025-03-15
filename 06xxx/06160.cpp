#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Cow {
  int id, a, b;
};

inline bool cmp1(const Cow &x, const Cow &y) {
  return x.a > y.a;
}

inline bool cmp2(const Cow &x, const Cow &y) {
  return x.b > y.b;
}

void solve(void) {
  int n, k; cin >> n >> k;
  vector<Cow> c(n);
  for (int i=0; i<n; i++) cin >> c[i].a >> c[i].b, c[i].id = i+1;
  sort(c.begin(), c.end(), cmp1);

  cout << min_element(c.begin(), c.begin()+k, cmp2)->id;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}