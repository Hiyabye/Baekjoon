#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string x; cin >> x;

  cout << (next_permutation(x.begin(), x.end()) ? x : "0");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}