#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  for (int i=0; i<s.length(); i++) {
    if (s[i] != 'c') cout << s[i];
    else if (i+1 < s.length() && s[i+1] == 'h') {
      cout << 'c'; i++;
    } else if (i+1 < s.length() && (s[i+1] == 'e' || s[i+1] == 'i' || s[i+1] == 'y')) {
      cout << 's';
    } else {
      cout << 'k';
    }
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}