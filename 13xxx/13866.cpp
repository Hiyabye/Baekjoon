#include <iostream>
#include <algorithm>
using namespace std;

void solve(void) {
  int a, b, c, d; cin >> a >> b >> c >> d;

  cout << min(abs(a+d-b-c), min(abs(a+c-b-d), abs(a+b-c-d)));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}