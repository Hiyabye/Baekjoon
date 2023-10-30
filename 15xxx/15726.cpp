#include <iostream>
#include <algorithm>
using namespace std;

void solve(void) {
  long long a, b, c; cin >> a >> b >> c;

  cout << max(a*b/c, a*c/b);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}