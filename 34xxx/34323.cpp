#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  long long n, m, s; cin >> n >> m >> s;

  cout << min(m*s, (m+1)*s*(100-n)/100);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}