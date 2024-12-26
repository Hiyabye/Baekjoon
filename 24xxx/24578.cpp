#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  for (int i=3; i>=0; i--) {
    cout << ((n / 1000) >> i & 1 ? "*" : ".") << " ";
    cout << (((n / 100) % 10) >> i & 1 ? "*" : ".") << "   ";
    cout << (((n / 10) % 10) >> i & 1 ? "*" : ".") << " ";
    cout << ((n % 10) >> i & 1 ? "*" : ".") << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}