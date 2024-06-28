#include <iostream>
using namespace std;

void solve(void) {
  long long a, b; cin >> a >> b;

  cout << (a+b)*(a-b) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}