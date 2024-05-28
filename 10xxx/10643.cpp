#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> s(8);
  for (int i=0; i<8; i++) cin >> s[i];

  vector<int> ans(8, 0);
  for (int i=0; i<8; i++) for (int j=0; j<4; j++) {
    ans[i] += s[(i+j)%8];
  }
  cout << *max_element(ans.begin(), ans.end());
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}