#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int cnt = 0;
  string s;

  while (getline(cin, s)) cnt++;
  cout << cnt;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}