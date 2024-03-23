#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int o = n, p = 0;
  while (!(o & 1)) o >>= 1, p++;
  cout << o << " " << p;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}