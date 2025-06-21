#include <iostream>
#include <string>
using namespace std;

inline string calc(const string &a, const string &b) {
  string ret = "";
  for (int i=a.length()-1, j=b.length()-1; i>=0 || j>=0;) {
    int x = 1;
    if (i >= 0) x *= a[i--] - '0';
    if (j >= 0) x *= b[j--] - '0';
    ret = to_string(x) + ret;
  }
  return ret;
}

bool solve(void) {
  long long a, b; cin >> a >> b;

  return to_string(a * b) == calc(to_string(a), to_string(b));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << solve() << "\n";
  return 0;
}