#include <cmath>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(int idx) {
  string a; getline(cin, a);
  string b; getline(cin, b);

  unordered_map<char, int> cnt;
  for (char c : a) if (c != '\n') cnt[c]++;
  for (char c : b) if (c != '\n') cnt[c]--;

  int ans = 0;
  for (auto [_, v] : cnt) ans += abs(v);
  cout << "Case #" << idx << ": " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  cin.ignore();
  for (int i=1; i<=n; i++) solve(i);
  return 0;
}