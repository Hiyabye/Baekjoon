#include <iostream>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  cout << n * n * (n+1) * (n+1) / 4 << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}