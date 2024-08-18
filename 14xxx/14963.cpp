#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<int> v(12, 4); v[10] = 16;

  int x = 21;
  for (int i=0; i<n; i++) {
    int a; cin >> a;
    v[a]--; x -= a;
  }

  int ans = 0;
  for (int i=x+1; i<=11; i++) {
    ans += v[i];
  }
  return ans < 52 - n - ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "VUCI" : "DOSTA");
  return 0;
}