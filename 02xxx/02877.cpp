#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(void) {
  int k; cin >> k;
  k++;

  vector<int> binary;
  while (k > 0) {
    binary.push_back(k & 1);
    k >>= 1;
  }
  reverse(binary.begin(), binary.end());

  for (int i=1; i<binary.size(); i++) {
    cout << (binary[i] ? 7 : 4);
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}