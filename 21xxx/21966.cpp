#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  if (n <= 25) {
    cout << s;
    return;
  }

  string t = s.substr(12, n-24);
  if (t.find('.') == string::npos) {
    cout << s.substr(0, 11) << "..." << s.substr(n-11, 11);
  } else {
    cout << s.substr(0, 9) << "......" << s.substr(n-10, 10);
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}