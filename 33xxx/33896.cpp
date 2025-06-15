#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student {
  string n;
  int s, r, c;
};

inline bool cmp(const Student &a, const Student &b) {
  int aa = a.s*a.s*a.s/a.c/(a.r+1);
  int bb = b.s*b.s*b.s/b.c/(b.r+1);
  if (aa != bb) return aa > bb;
  if (a.c != b.c) return a.c < b.c;
  return a.n < b.n;
}

void solve(void) {
  int n; cin >> n;
  vector<Student> v(n);
  for (int i=0; i<n; i++) cin >> v[i].n >> v[i].s >> v[i].r >> v[i].c;
  sort(v.begin(), v.end(), cmp);

  cout << v[1].n;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}