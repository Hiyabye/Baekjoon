#include <iostream>
using namespace std;

void solve(void) {
  int s, v1, v2; cin >> s >> v1 >> v2;

  for (int i=s/v1; i>=0; i--) {
    if ((s-i*v1) % v2) continue;
    cout << i << " " << (s-i*v1) / v2;
    return;
  }
  cout << "Impossible";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}