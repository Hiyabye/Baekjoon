#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int h, w, n; cin >> h >> w >> n;
  vector<int> x(n);
  for (int i=0; i<n; i++) cin >> x[i];

  int idx = 0;
  while (h--) {
    int cur = 0;
    while (cur < w) {
      if (idx == n || cur + x[idx] > w) return false;
      cur += x[idx++];
    }
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}