#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> a(12), b(12), c(12);

int backtrack(int idx, int sum) {
  switch (idx) {
    case 4: sum = b[0] + b[1] + b[2] + b[3]; break;
    case 7: if (sum != b[1] + b[4] + b[5] + b[6]) return 0; break;
    case 9: if (sum != b[0] + b[5] + b[7] + b[8]) return 0; break;
    case 11: if (sum != b[3] + b[8] + b[9] + b[10]) return 0; break;
    case 12: return (sum == b[2] + b[6] + b[10] + b[11]) && (sum == b[4] + b[7] + b[9] + b[11]);
  }

  int ret = 0;
  for (int i=0; i<12; i++) {
    if (c[i]) continue;
    b[idx] = a[i];
    c[i] = 1;
    ret += backtrack(idx+1, sum);
    c[i] = 0;
  }
  return ret;
}

bool solve(void) {
  for (int i=0; i<12; i++) cin >> a[i];
  if (*max_element(a.begin(), a.end()) == 0) return false;
  
  fill(b.begin(), b.end(), 0);
  fill(c.begin(), c.end(), 0);
  b[0] = a[0]; c[0] = 1;
  int ans = backtrack(1, 0);

  fill(b.begin(), b.end(), 0);
  fill(c.begin(), c.end(), 0);
  b[0] = a[1]; c[1] = 1;
  ans += backtrack(1, 0);

  cout << ans / 2 << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  while (solve());
  return 0;
}