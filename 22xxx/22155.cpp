#include <iostream>
using namespace std;

bool solve(void) {
  int i, f; cin >> i >> f;
  
  return (i <= 1 && f <= 2) || (i <= 2 && f <= 1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) cout << (solve() ? "Yes" : "No") << "\n";
  return 0;
}