#include <iostream>
#include <string>
using namespace std;

string base(long long n, long long k) {
  string ret = "";
  while (n) {
    ret = to_string(n % k) + ret;
    n /= k;
  }
  return ret;
}

void solve(void) {
  long long n, k; cin >> n >> k;

  string s = base(n, k), t = "";
  long long ans = 0;

  for (char c : s) {
    if (c != '0') {
      t += c;
    } else if (!t.empty()) {
      ans += stoll(t);
      t = "";
    }
  }
  if (!t.empty()) ans += stoll(t);

  cout << base(ans, k);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}