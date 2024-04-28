#include <iostream>
#include <vector>
using namespace std;

typedef struct {
  int x, y, r;
} Circle;

inline bool check(const Circle &a, const Circle &b) {
  return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y) < (a.r + b.r) * (a.r + b.r);
}

void solve(void) {
  int n; cin >> n;
  vector<Circle> c(n);
  for (int i=0; i<n; i++) cin >> c[i].x >> c[i].y >> c[i].r;

  vector<int> ans(n, 0);
  for (int i=0; i<n-1; i++) for (int j=i+1; j<n; j++) {
    if (check(c[i], c[j])) {
      ans[i]++; ans[j]++;
    }
  }

  for (int i=0; i<n; i++) {
    cout << ans[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}