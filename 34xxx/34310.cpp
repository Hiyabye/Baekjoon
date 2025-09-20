#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  while (n--) {
    string a, b; int c; cin >> a >> b >> c;
    ans += (b == "IN" ? c : -c);
  }
  cout << (ans ? to_string(ans) : "NO STRAGGLERS");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}