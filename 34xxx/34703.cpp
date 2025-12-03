#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<bool> v(6, true);
  while (n--) {
    int x; cin >> x;
    v[x] = false;
  }

  for (int i=1; i<=5; i++) {
    if (v[i]) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}