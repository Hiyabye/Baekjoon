#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  long long a, b; cin >> a >> b;

  cout << min(a+1, b);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}