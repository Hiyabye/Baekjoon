#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Toy {
  double j, p;
  int idx;
};

bool cmp(const Toy &a, const Toy &b) {
  return a.j / a.p > b.j / b.p;
}

void solve(void) {
  int n; cin >> n;
  vector<Toy> v(n);
  for (int i=0; i<n; i++) cin >> v[i].j >> v[i].p, v[i].idx = i+1;
  sort(v.begin(), v.end(), cmp);

  cout << v[0].p + v[1].p + v[2].p << "\n";
  cout << v[0].idx << "\n" << v[1].idx << "\n" << v[2].idx;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}