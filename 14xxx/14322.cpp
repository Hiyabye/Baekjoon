#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

int calc(const string &s) {
  unordered_set<char> us;
  for (char c : s) us.insert(c);
  return us.size();
}

bool cmp(const string &a, const string &b) {
  int ca = calc(a), cb = calc(b);
  if (ca != cb) return ca < cb;
  return a > b;
}

void solve(int idx) {
  int n; cin >> n;
  cin.ignore();
  vector<string> v(n);
  for (int i=0; i<n; i++) getline(cin, v[i]);

  cout << "Case #" << idx << ": " << *max_element(v.begin(), v.end(), cmp) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}