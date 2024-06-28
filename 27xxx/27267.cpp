#include <iostream>
using namespace std;

void solve(void) {
  int a, b, c, d; cin >> a >> b >> c >> d;
  
  cout << (a*b > c*d ? "M" : (a*b < c*d ? "P" : "E"));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}