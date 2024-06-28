#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  int a = 0, b = 0;
  for (int i=0; i<n; i++) {
    if (s[i] == '2') a++;
    else b++;
  }
  cout << (a > b ? "2" : (a < b ? "e" : "yee"));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}