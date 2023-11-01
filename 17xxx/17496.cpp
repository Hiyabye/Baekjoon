#include <iostream>
using namespace std;

void solve(void) {
  int n, t, c, p; cin >> n >> t >> c >> p;

  cout << (n-1)/t*c*p;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}