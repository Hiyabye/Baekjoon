#include <iostream>
#include <string>
using namespace std;

inline bool palindrome(const string &s) {
  for (int i=0; i<s.length()/2; i++) {
    if (s[i] != s[s.length()-i-1]) return false;
  }
  return true;
}

inline bool prime(int n) {
  if (n < 2) return false;
  for (int i=2; i*i<=n; i++) {
    if (!(n % i)) return false;
  }
  return true;
}

void solve(void) {
  int a, b; cin >> a >> b;

  for (int i=a; i<=b && i<=1e7; i++) {
    if (!palindrome(to_string(i))) continue;
    if (prime(i)) cout << i << "\n";
  }
  cout << -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}