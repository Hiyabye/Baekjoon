#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;

  while (to_string(++n).find('0') != string::npos);
  cout << n;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}