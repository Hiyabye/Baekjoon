#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; getline(cin, s);

  int idx = 0, cnt = 0;
  while (cnt < 2) if (s[idx++] == ' ') cnt++;
  cout << s.substr(idx) << " " << s.substr(0, idx - 1) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  int n; cin >> n;
  cin.ignore();
  while (n--) solve();
  return 0;
}