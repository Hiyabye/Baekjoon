#include <cctype>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  sort(v.begin(), v.end(), [](string a, string b) {
    for (int i=0; i<a.length(); i++) a[i] = tolower(a[i]);
    for (int i=0; i<b.length(); i++) b[i] = tolower(b[i]);
    return a < b;
  });

  cout << v[0] << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}