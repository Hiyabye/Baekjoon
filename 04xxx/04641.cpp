#include <iostream>
#include <set>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == -1) return false;

  set<int> s;
  while (n) {
    s.insert(n);
    cin >> n;
  }

  int ans = 0;
  for (int x : s) {
    if (s.count(x*2)) ans++;
  }
  cout << ans << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}