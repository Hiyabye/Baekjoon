#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;

  string s = "";
  for (int i=0; i<n; i++) {
    char c; cin >> c;
    s += c;
  }

  string t = "";
  for (int i=0, j=n-1; i<=j;) {
    if (s[i] < s[j]) t += s[i++];
    else if (s[i] > s[j]) t += s[j--];
    else {
      int ii = i, jj = j;
      while (ii < jj && s[ii] == s[jj]) ii++, jj--;
      if (ii < jj && s[ii] < s[jj]) t += s[i++];
      else t += s[j--];
    }
  }

  for (int i=0; i<n; i++) {
    cout << t[i];
    if (i % 80 == 79) cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}