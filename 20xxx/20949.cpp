#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

typedef struct {
  int w, h, id;
} Monitor;

bool cmp(const Monitor &a, const Monitor &b) {
  if (hypot(a.w, a.h) != hypot(b.w, b.h)) return hypot(a.w, a.h) > hypot(b.w, b.h);
  return a.id < b.id;
}

void solve(void) {
  int n; cin >> n;
  vector<Monitor> v(n);
  for (int i=0; i<n; i++) cin >> v[i].w >> v[i].h, v[i].id = i+1;
  sort(v.begin(), v.end(), cmp);

  for (int i=0; i<n; i++) {
    cout << v[i].id << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}