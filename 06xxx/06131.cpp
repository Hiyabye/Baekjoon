#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  for (int b=1; b<=500; b++) {
    for (int a=b; a<=500; a++) {
      if (a*a == b*b + n) ans++;
      else if (a*a > b*b + n) break;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}