#include <iostream>
using namespace std;

bool solve(void) {
  int n, m; cin >> n >> m;

  return n * 81 <= m * 100;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "yaho" : "no");
  return 0;
}