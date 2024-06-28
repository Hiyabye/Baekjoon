#include <iostream>
#include <string>
using namespace std;

bool check(string a, string b) {
  int c = 1, d = 1;
  for (int i=0; i<a.length(); i++) c *= a[i]-'0';
  for (int i=0; i<b.length(); i++) d *= b[i]-'0';
  return c == d;
}

void solve(void) {
  string n;
  cin >> n;

  for (int i=1; i<n.length(); i++) {
    if (check(n.substr(0, i), n.substr(i, n.length()-i))) {
      cout << "YES\n";
      return;
    }
  }
  cout << "NO\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}