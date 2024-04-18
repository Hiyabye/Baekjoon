#include <iostream>
#include <string>
using namespace std;

void solve(const string &s) {
  string t; cin >> t;

  int a = 0, b = 0;
  for (int i=0; i<4; i++) {
    if (s.find(t[i]) != string::npos) a++;
    if (t[i] == s[i]) b++;
  }
  cout << a << " " << b << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s; cin >> s;
  int n; cin >> n;
  while (n--) solve(s);
  return 0;
}