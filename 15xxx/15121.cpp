#include <iostream>
using namespace std;

void solve(void) {
  int s; cin >> s;

  cout << s << ":\n";
  for (int i=2; i<=s/2+1; i++) {
    if (s % (2*i-1) == 0 || s % (2*i-1) == i) cout << i << "," << i-1 << "\n";
    if (s % i == 0) cout << i << "," << i << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}