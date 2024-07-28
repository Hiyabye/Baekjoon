#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string n; cin >> n;
  if (n == "0") return false;

  long long ans = 0;
  for (int i=n.length()-1; i>=0; i--) {
    ans += (n[i] - '0') * ((1LL << (n.length()-i)) - 1);
  }
  cout << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}