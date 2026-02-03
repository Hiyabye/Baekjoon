#include <iostream>
using namespace std;

bool solve(void) {
  int h, m; cin >> h >> m;
  if (m % 12) return false;

  return (h * 12) % 360 == m;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "yes" : "no");
  return 0;
}