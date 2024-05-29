#include <iostream>
using namespace std;

bool solve(void) {
  int n, m; cin >> n >> m;

  return n % 3 == 0 || m % 3 == 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}