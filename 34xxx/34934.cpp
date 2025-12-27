#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;

  string a; int b; cin >> a >> b;
  while (--n) {
    string s; int t; cin >> s >> t;
    if (t > b) a = s, b = t;
  }
  cout << a;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}