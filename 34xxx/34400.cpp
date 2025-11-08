#include <iostream>
using namespace std;

bool solve(void) {
  int t; cin >> t;

  return t % 25 <= 16;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "ON" : "OFF") << "LINE\n";
  return 0;
}