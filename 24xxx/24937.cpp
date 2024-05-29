#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  const string s = "SciComLove";

  cout << s.substr(n % 10) << s.substr(0, n % 10);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}