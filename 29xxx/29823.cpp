#include <cmath>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  int x = 0, y = 0;
  for (int i=0; i<n; i++) {
    x += (s[i] == 'E') - (s[i] == 'W');
    y += (s[i] == 'N') - (s[i] == 'S');
  }
  cout << abs(x) + abs(y);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}