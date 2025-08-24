#include <iostream>
#include <string>
using namespace std;

inline int c2i(char c) {
  return ('0' <= c && c <= '9') ? c-'0' : c-'A'+10;
}

inline char i2c(int i) {
  return i < 10 ? '0'+i : 'A'+i-10;
}

string solve(void) {
  int x, y; string z; cin >> x >> y >> z;

  long long val = 0;
  for (char c : z) val = val * x + c2i(c);
  if (val == 0) return "0";

  string ans = "";
  while (val) {
    ans = i2c(val % y) + ans;
    val /= y;
  }
  return ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << solve() << "\n";
  return 0;
}