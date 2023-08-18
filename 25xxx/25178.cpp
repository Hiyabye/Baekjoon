#include <bits/stdc++.h>
using namespace std;

int n;
string a, b;

bool one(void) {
  vector<int> alpha(26, 0);
  for (int i=0; i<n; i++) alpha[a[i]-'a']++;
  for (int i=0; i<n; i++) alpha[b[i]-'a']--;
  for (int i=0; i<26; i++) if (alpha[i] != 0) return false;
  return true;
}

bool two(void) {
  return a[0] == b[0] && a[n-1] == b[n-1];
}

bool three(void) {
  string c = "", d = "";
  for (int i=0; i<n; i++) if (a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u') c += a[i];
  for (int i=0; i<n; i++) if (b[i] != 'a' && b[i] != 'e' && b[i] != 'i' && b[i] != 'o' && b[i] != 'u') d += b[i];
  return c == d;
}

void solve(void) {
  cin >> n;
  cin >> a;
  cin >> b;
  cout << (one() && two() && three() ? "YES\n" : "NO\n");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}