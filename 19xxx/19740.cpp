#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline int pow10(int n) {
  int res = 1;
  while (n--) res *= 10;
  return res;
}

void solve(void) {
  int k; cin >> k;
  vector<string> v(k);
  for (int i=0; i<k; i++) cin >> v[i];

  cout << max(stoi(*max_element(v.begin(), v.end())), pow10(v[0].length() - 1)) << "\n";
  cout << pow10(v[0].length()) - 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}