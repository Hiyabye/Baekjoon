#include <iostream>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  int ans = 1;
  while (n > 0) {
    ans += (n % 10 == 1 ? 3 : (n % 10 == 0 ? 5 : 4));
    n /= 10;
  }
  cout << ans << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  while (solve());
  return 0;
}