#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve(void) {
  int n; cin >> n;
  while (n--) {
    string s; cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}