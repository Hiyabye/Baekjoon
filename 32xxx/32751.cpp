#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  int a, b, c, d; cin >> a >> b >> c >> d;
  string s; cin >> s;

  if (s.front() != 'a' || s.back() != 'a') return false;
  for (int i=1; i<n; i++) {
    if (s[i-1] == s[i]) return false;
  }

  for (int i=0; i<n; i++) {
    if (s[i] == 'a') a--;
    else if (s[i] == 'b') b--;
    else if (s[i] == 'c') c--;
    else if (s[i] == 'd') d--;
  }
  return a >= 0 && b >= 0 && c >= 0 && d >= 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Yes" : "No");
  return 0;
}