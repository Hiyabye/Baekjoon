#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  string ans; int idx = 0;
  while (n--) {
    string a; char c; cin >> a >> c;
    if (a == "INSERT") {
      ans.insert(ans.begin() + idx++, c);
    } else if (a == "LEFT") {
      idx = max(0, --idx);
    } else if (a == "RIGHT") {
      idx = min<int>(ans.length(), ++idx);
    }
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