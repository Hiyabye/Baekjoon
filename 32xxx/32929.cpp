#include <iostream>
using namespace std;

void solve(void) {
  int x; cin >> x;
  
  cout << (x % 3 == 0 ? 'S' : (x % 3 == 1 ? 'U' : 'O'));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}