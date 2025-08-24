#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string v; cin >> v;

  int a = 0, b = 0;
  for (char c : v) {
    if (c == 'U' || c == 'C') a++;
    else b++;
  }
  cout << (a > (b+1)/2 ? "U" : "") << (b ? "DP" : "");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}