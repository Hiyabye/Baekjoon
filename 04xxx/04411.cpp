#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  vector<int> v(n);
  for (int i=0; i<n; i++) {
    string s; cin >> s;
    v[i] = stoi(s.substr(0, s.length()-3)) * 100 + stoi(s.substr(s.length()-2));
  }
  sort(v.begin(), v.end(), greater<int>());

  int sum = accumulate(v.begin(), v.end(), 0), ans = 0;
  for (int i=0; i<n; i++) {
    ans += abs(sum / n - v[i] + (i < sum % n));
  }
  cout << "$" << ans / 200 << "." << setw(2) << setfill('0') << ans / 2 % 100 << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}