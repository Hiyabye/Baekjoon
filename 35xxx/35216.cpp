#include <iostream>
using namespace std;

void solve(void) {
  int s; cin >> s;

  if (s > 1) cout << 1 << " " << s-1;
  else if (s == 1) cout << "-1 2";
  else if (s == 0) cout << "-1 1";
  else if (s == -1) cout << "1 -2";
  else cout << "-1 " << s+1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}