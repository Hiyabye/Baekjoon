#include <iostream>
using namespace std;

bool solve(void) {
  int m, k; cin >> m >> k;
  
  return m % k == 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Yes" : "No");
  return 0;
}