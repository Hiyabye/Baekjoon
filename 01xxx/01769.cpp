#include <iostream>
#include <string>
using namespace std;

string change(string x) {
  int ret = 0;
  for (int i=0; i<x.size(); i++) {
    ret += x[i] - '0';
  }
  return to_string(ret);
}

void solve(void) {
  string x;
  cin >> x;

  int ans = 0;
  while (x.size() > 1) {
    x = change(x);
    ans++;
  }

  if (x == "3" || x == "6" || x == "9") cout << ans << "\nYES";
  else cout << ans << "\nNO";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}