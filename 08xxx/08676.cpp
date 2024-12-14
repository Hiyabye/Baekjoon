#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<int> f(n);
  for (int i=0; i<n; i++) cin >> f[i];

  for (int i=2; i<n; i++) {
    if (f[i-2] != f[i-1] && f[i-1] != f[i] && f[i] != f[i-2]) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "TAK" : "NIE");
  return 0;
}