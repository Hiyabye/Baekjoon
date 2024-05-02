#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(int idx) {
  int n; cin >> n;
  cin.ignore();
  vector<string> a(n);
  for (int i=0; i<n; i++) getline(cin, a[i]);

  int ans = 0;
  for (int i=1, j=0; i<n; i++) {
    if (a[i] < a[j]) ans++;
    else j = i;
  }
  cout << "Case #" << idx << ": " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}