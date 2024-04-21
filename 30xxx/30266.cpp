#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool check(const string &a, const string &b) {
  for (char c : a) for (char d : b) {
    if (c == d) return true;
  }
  return false;
}

void solve(int idx) {
  int n; cin >> n;
  vector<string> v(n+1);
  for (int i=0; i<=n; i++) cin >> v[i];

  int ans = 0;
  for (int i=1; i<=n; i++) {
    if (check(v[0], v[i])) ans++;
  }
  cout << "Data Set " << idx << ":\n" << ans << "\n\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int k; cin >> k;
  for (int i=1; i<=k; i++) solve(i);
  return 0;
}