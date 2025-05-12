#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int s, v, o; cin >> s >> v >> o; cin.ignore();
  vector<string> a(s), b(v), c(o);
  for (int i=0; i<s; i++) getline(cin, a[i]);
  for (int i=0; i<v; i++) getline(cin, b[i]);
  for (int i=0; i<o; i++) getline(cin, c[i]);

  for (int i=0; i<s; i++) for (int j=0; j<v; j++) for (int k=0; k<o; k++) {
    cout << a[i] << " " << b[j] << " " << c[k] << ".\n";
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}