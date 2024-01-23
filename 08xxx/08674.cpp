#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  long long a, b; cin >> a >> b;

  cout << (a & 1 && b & 1 ? min(a, b) : 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}