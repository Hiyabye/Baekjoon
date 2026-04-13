#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Level {
  int l, p, id;
};

inline bool cmp(const Level &a, const Level &b) {
  if (a.p != b.p) return a.p > b.p;
  if (a.l != b.l) return a.l > b.l;
  return a.id < b.id;
}

void solve(int idx) {
  int n; cin >> n;
  vector<Level> v(n);
  for (int i=0; i<n; i++) cin >> v[i].l;
  for (int i=0; i<n; i++) cin >> v[i].p;
  for (int i=0; i<n; i++) v[i].id = i;
  sort(v.begin(), v.end(), cmp);

  cout << "Case #" << idx << ": ";
  for (int i=0; i<n; i++) {
    cout << v[i].id << " ";
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}