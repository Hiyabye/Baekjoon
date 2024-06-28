#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string n; cin >> n;

  int sum = 0, len = n.length();
  for (int i=0; i<len/2; i++) sum += n[i] - '0';
  for (int i=len/2; i<len; i++) sum -= n[i] - '0';

  cout << (sum == 0 ? "LUCKY" : "READY");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}