#include <iostream>
using namespace std;

bool solve(void) {
  int n, m; cin >> n >> m;

  return (n & 1) && (m & 1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? 'B' : 'A');
  return 0;
}