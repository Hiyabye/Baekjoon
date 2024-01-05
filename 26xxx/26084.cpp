#include <iostream>
#include <vector>
#include <string>
using namespace std;

long long c(int n, int k) {
  long long ret = 1;
  for (int i=0; i<k; i++) {
    ret *= n-i;
    ret /= i+1;
  }
  return ret;
}

void solve(void) {
  vector<int> cnt1(26, 0), cnt2(26, 0);
  string s; cin >> s;
  for (int i=0; i<3; i++) cnt1[s[i]-'A']++;

  int n; cin >> n;
  while (n--) {
    string t; cin >> t;
    cnt2[t[0]-'A']++;
  }

  long long ans = 1;
  for (int i=0; i<26; i++) {
    if (cnt1[i] == 0) continue;
    ans *= c(cnt2[i], cnt1[i]);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}