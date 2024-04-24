#include <iostream>
using namespace std;

void solve(void) {
  int s, m; cin >> s >> m;

  if (s < 1024) cout << "No thanks";
  else if (((s-1023) & m) == (s-1023)) cout << "Thanks";
  else cout << "Impossible";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}