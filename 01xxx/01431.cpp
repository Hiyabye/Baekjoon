#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(string &a, string &b) {
  if (a.length() != b.length()) return a.length() < b.length();
  int a_sum = 0, b_sum = 0;
  for (int i=0; i<a.length(); i++) {
    if ('0' <= a[i] && a[i] <= '9') a_sum += a[i] - '0';
    if ('0' <= b[i] && b[i] <= '9') b_sum += b[i] - '0';
  }
  if (a_sum != b_sum) return a_sum < b_sum;
  return a < b;
}

void solve(void) {
  int n; cin >> n;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  sort(v.begin(), v.end(), cmp);
  for (int i=0; i<n; i++) cout << v[i] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}