#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef struct {
  string name;
  int r, s, d;
} Computer;

bool cmp(const Computer &a, const Computer &b) {
  if (2 * a.r + 3 * a.s + a.d != 2 * b.r + 3 * b.s + b.d) {
    return 2 * a.r + 3 * a.s + a.d > 2 * b.r + 3 * b.s + b.d;
  }
  return a.name < b.name;
}

void solve(void) {
  int n; cin >> n;
  vector<Computer> v(n);
  for (int i=0; i<n; i++) cin >> v[i].name >> v[i].r >> v[i].s >> v[i].d;

  if (n == 0) return;
  if (n == 1) { cout << v[0].name; return; }
  sort(v.begin(), v.end(), cmp);
  
  cout << v[0].name << "\n" << v[1].name;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}