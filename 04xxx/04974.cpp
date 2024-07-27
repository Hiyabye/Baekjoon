#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;
  vector<int> s(n);
  for (int i=0; i<n; i++) cin >> s[i];

  cout << (accumulate(s.begin(), s.end(), 0) - *max_element(s.begin(), s.end()) - *min_element(s.begin(), s.end())) / (n-2) << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}