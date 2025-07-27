#include <iostream>
#include <string>
using namespace std;

inline bool check(const string &s) {
  int x = 0;
  for (int i=0; i<s.length()/2; i++) x += s[i] - '0';
  for (int i=s.length()/2; i<s.length(); i++) x -= s[i] - '0';
  return x == 0;
}

void solve(void) {
  string s; cin >> s;

  for (int i=s.length()-(s.length() & 1); i>=2; i-=2) {
    for (int j=0; j<=s.length()-i; j++) {
      if (check(s.substr(j, i))) {
        cout << i;
        return;
      }
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}