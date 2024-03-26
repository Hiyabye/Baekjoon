#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string a; getline(cin, a);
  string b; getline(cin, b);

  int ans = 0;
  for (int i=0; i<a.length(); i++) {
    if (a.substr(i, b.length()) == b) {
      ans++;
      i += b.length() - 1;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}