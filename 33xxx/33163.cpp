#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  for (char c : s) {
    cout << (c == 'J' ? 'O' : (c == 'O' ? 'I' : 'J'));
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}