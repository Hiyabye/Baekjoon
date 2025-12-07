#include <iostream>
using namespace std;

bool solve(void) {
  int n, k; cin >> n >> k;

  return k % 2 == 0 || n >= k + 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}