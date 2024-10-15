#include <iostream>
using namespace std;

void solve(void) {
  long long n; cin >> n;

  if (-32768 <= n && n <= 32767) cout << "short";
  else if (-2147483648 <= n && n <= 2147483647) cout << "int";
  else cout << "long long";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}