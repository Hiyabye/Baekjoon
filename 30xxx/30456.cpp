#include <iostream>
using namespace std;

void solve(void) {
  int n, l; cin >> n >> l;

  for (int i=1; i<l; i++) cout << 1;
  cout << n;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}