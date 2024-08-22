#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n, m; cin >> n >> m;
  vector<int> a(m);
  for (int i=0; i<m; i++) cin >> a[i];

  if (n < m) return false;
  for (int i=0; i<m; i++) {
    if (a[i] < 4) return false;
    n -= a[i] / 4;
  }
  return n <= 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "DA" : "NE");
  return 0;
}