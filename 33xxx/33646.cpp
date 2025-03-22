#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;

  int ans = 0;
  while (n--) {
    unordered_set<string> us;
    for (int i=0; i<k; i++) {
      string s; cin >> s;
      if (us.find(s) != us.end()) ans++;
      us.insert(s);
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}