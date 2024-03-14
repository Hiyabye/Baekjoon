#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  int a = 0, b = 0;
  for (int i=0; i<s.length();) {
    if (s[i] == 'b') a++, i += 7;
    else b++, i += 8;
  }
  cout << (a > b ? "bigdata?" : (a < b ? "security!" : "bigdata? security!"));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}