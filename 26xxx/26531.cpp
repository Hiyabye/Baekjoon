#include <iostream>
using namespace std;

void solve(void) {
  int a, b, c; char op;
  cin >> a >> op >> b >> op >> c;
  
  cout << (a + b == c ? "YES" : "NO");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}