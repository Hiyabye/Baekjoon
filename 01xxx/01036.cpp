#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;

inline int c2i(char c) { return c >= 'A' ? c - 'A' + 10 : c - '0'; }
inline char i2c(int i) { return i >= 10 ? i - 10 + 'A' : i + '0'; }

string add(string a, string b) {
  string c = ""; int carry = 0;
  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());
  for (int i=0; i<a.length() || i<b.length(); i++) {
    int x = i < a.length() ? c2i(a[i]) : 0;
    int y = i < b.length() ? c2i(b[i]) : 0;
    int z = x + y + carry;
    carry = z / 36;
    c += i2c(z % 36);
  }
  if (carry) c += i2c(carry);
  reverse(c.begin(), c.end());
  return c;
}

string calc(int n, vector<string> a, char c) {
  for (int i=0; i<n; i++) for (int j=0; j<a[i].length(); j++) {
    if (a[i][j] == c) a[i][j] = 'Z';
  }
  string s = "0";
  for (int i=0; i<n; i++) s = add(s, a[i]);
  return s;
}

bool cmp1(const string &s, const string &t) {
  if (s.length() != t.length()) return s.length() > t.length();
  for (int i=0; i<s.length(); i++) {
    if (c2i(s[i]) != c2i(t[i])) return c2i(s[i]) > c2i(t[i]);
  }
  return false;
}

bool cmp2(const pair<string, int> &p, const pair<string, int> &q) {
  return cmp1(p.first, q.first);
}

void solve(void) {
  int n; cin >> n;
  vector<string> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  int k; cin >> k;

  vector<pair<string, int>> b(36);
  for (int i=0; i<36; i++) {
    b[i] = {calc(n, a, i2c(i)), i};
  }
  sort(b.begin(), b.end(), cmp2);

  unordered_set<char> s;
  for (int i=0; i<k; i++) {
    s.insert(i2c(b[i].second));
  }

  for (int i=0; i<n; i++) for (int j=0; j<a[i].length(); j++) {
    if (s.find(a[i][j]) != s.end()) a[i][j] = 'Z';
  }

  string ans = "0";
  for (int i=0; i<n; i++) {
    ans = add(ans, a[i]);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}