#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  int x, s; cin >> x >> s;
  vector<int> c(n), p(n);
  for (int i=0; i<n; i++) cin >> c[i] >> p[i];
  
  for (int i=0; i<n; i++) {
    if (x < c[i]) continue;
    if (p[i] > s) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}