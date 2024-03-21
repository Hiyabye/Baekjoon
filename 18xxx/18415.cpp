#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  for (int i=0; i<n; i++) {
    if (i+2 < n && s.substr(i, 3) == "joi") {
      cout << "JOI";
      i += 2;
    } else {
      cout << s[i];
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}