#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int x; cin >> x; cin.ignore();
  string s; getline(cin, s);

  int ans = 0;
  for (int i=0; i<=4*x; i+=4) {
    if (s[i] == '!') ans += 10;
    else ans += (s[i] - '0');
  }
  cout << (ans >= 10 ? '!' : (char)(ans + '0')) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}