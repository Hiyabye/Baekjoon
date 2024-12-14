#include <iostream>
#include <string>
#define MOD 1000000007
using namespace std;

long long solve(void) {
  string s; cin >> s;
  if (s.length() == 1) return 1;

  long long ans = (1 + (s[0] != s[1])) * (1 + (s.back() != s[s.length()-2]));
  for (int i=1; i<s.size()-1; i++) {
    ans = (ans * (1 + (s[i-1] != s[i]) + (s[i+1] != s[i] && s[i+1] != s[i-1]))) % MOD;
  }
  return ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) cout << "Case #" << i << ": " << solve() << "\n";
  return 0;
}