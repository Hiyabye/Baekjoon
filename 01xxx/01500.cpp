#include <iostream>
using namespace std;

void solve(void) {
  int s, k; cin >> s >> k;

  long long ans = 1;
  for (int i=0; i<s%k; i++) ans *= s/k+1;
  for (int i=s%k; i<k; i++) ans *= s/k;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}