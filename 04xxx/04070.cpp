#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool check(int cur, int k, const vector<int> &v) {
  int sum = 0;
  for (int i=cur; i<cur+k; i++) sum += v[i];
  for (int i=cur; i<cur+k; i++) {
    if (v[i] * k < sum - 2 * k) return false;
    if (v[i] * k > sum + 2 * k) return false;
  }
  return true;
}

bool solve(int idx) {
  int n, k; cin >> n >> k;
  if (n == 0 && k == 0) return false;

  vector<int> v(n);
  for (int i=0; i<n; i++) {
    string s; cin >> s;
    v[i] = s.length();
  }
  sort(v.begin(), v.end());

  bool flag = true;
  for (int i=0; i<n; i+=k) {
    if (!check(i, k, v)) {
      flag = false;
      break;
    }
  }

  cout << "Case " << idx << ": " << (flag ? "yes" : "no") << "\n\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int idx = 1;
  while (solve(idx++));
  return 0;
}