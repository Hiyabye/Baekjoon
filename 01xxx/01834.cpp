#include <iostream>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  long long ans = 0;
  for (long long i=1; i<=n-1; i++) {
    ans += n*i+i;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}