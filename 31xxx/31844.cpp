#include <cmath>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  int a = s.find('@');
  int b = s.find('#');
  int c = s.find('!');

  if ((a < b && b < c) || (c < b && b < a)) {
    cout << abs(a - c) - 1;
  } else {
    cout << -1;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}