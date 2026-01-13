#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  long long u, o, s; cin >> u >> o >> s;

  cout << min({u, o, (u+2*s)/3});
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}