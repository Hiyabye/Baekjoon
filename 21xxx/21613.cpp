#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;

  string a = ""; int b = 0;
  while (n--) {
    string s; cin >> s;
    int x; cin >> x;
    if (x > b) a = s, b = x;
  }
  cout << a;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}