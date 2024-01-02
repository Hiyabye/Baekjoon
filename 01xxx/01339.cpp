#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  vector<int> alpha(26, 0);
  string s;
  for (int i=0; i<n; i++) {
    cin >> s;
    for (auto j=0; j<s.length(); j++) {
      alpha[s[j]-'A'] += pow(10, s.length()-j-1);
    }
  }

  sort(alpha.begin(), alpha.end(), greater<int>());

  int ans = 0;
  for (int i=0; i<9; i++) {
    ans += alpha[i] * (9-i);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}