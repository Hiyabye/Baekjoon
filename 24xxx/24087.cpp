#include <iostream>
using namespace std;

void solve(void) {
  int s; cin >> s;
  int a; cin >> a;
  int b; cin >> b;

  cout << 250 + (s > a ? (s-a+b-1)/b*100 : 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}