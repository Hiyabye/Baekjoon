#include <iostream>
#include <string>
using namespace std;

string solve(void) {
  int h; cin >> h;
  if (h == 0) return "1";
  if (h == 1) return "0";

  string ans = "";
  if (h & 1) ans += "4";
  for (int i=1; i<h; i+=2) ans += "8";
  return ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}