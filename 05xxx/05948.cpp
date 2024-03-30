#include <iostream>
#include <set>
using namespace std;

void solve(void) {
  int n; cin >> n;

  set<int> s;
  while (s.find(n) == s.end()) {
    s.insert(n);
    n = n / 100 % 10 * 10 + n / 10 % 10;
    n *= n;
  }
  cout << s.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}