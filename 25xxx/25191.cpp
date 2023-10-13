#include <iostream>
#include <algorithm>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int a, b; cin >> a >> b;

  cout << min(n, a/2+b);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}