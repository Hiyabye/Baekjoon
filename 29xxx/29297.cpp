#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  int idx = s.find(':');
  int a = stoi(s.substr(0, idx)), b = stoi(s.substr(idx+1));

  int x = 0, y = 0;
  for (int i=0; i<=9; i++) for (int j=0; j<=9; j++) {
    if (a + i > b + j) x++;
    else if (a + i < b + j) y++;
    else if (i > b) x++;
    else if (i < b) y++;
  }
  cout << x << " " << y << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}