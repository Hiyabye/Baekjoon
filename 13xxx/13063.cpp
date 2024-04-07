#include <iostream>
using namespace std;

bool solve(void) {
  int n, m, k; cin >> n >> m >> k;
  if (n == 0 && m == 0 && k == 0) return false;

  cout << (n/2<m ? 0 : (n/2+1>n-k ? -1 : n/2+1-m)) << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}