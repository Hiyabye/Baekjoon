#include <iostream>
#include <string>
using namespace std;

bool palindrome(int x) {
  string s = to_string(x);
  for (int i=0; i<s.length()/2; i++) {
    if (s[i] != s[s.length()-i-1]) return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;

  long long ans = 0;
  while (n--) {
    int x; cin >> x;
    if (palindrome(x)) ans += x;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}