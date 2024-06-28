#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve(void) {
  int n; cin >> n;

  if (n == 0) {
    cout << 0;
    return;
  }

  string ans = "";
  while (n != 0) {
    if (n % -2) {
      ans += '1';
      n--;
    } else {
      ans += '0';
    }
    n /= -2;
  }
  reverse(ans.begin(), ans.end());
  
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}