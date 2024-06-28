#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

void solve(void) {
  int n, m;
  cin >> n >> m;

  map<string, int> a;
  vector<string> b(n+1);
  for (int i=1; i<=n; i++) {
    cin >> b[i];
    a[b[i]] = i;
  }

  string s;
  for (int i=0; i<m; i++) {
    cin >> s;
    if (isdigit(s[0])) cout << b[stoi(s)];
    else cout << a[s];
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}