#include <iostream>
using namespace std;

void solve(void) {
  long long a, b; cin >> a >> b;

  cout << (b+1)*((a-2)*b+2)/2 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}