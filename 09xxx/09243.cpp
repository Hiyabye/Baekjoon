#include <iostream>
#include <string>
using namespace std;

bool check(int n, string a, string b) {
  for (int i=0; i<a.length(); i++) {
    if (n % 2 == 0 && a[i] != b[i]) return false;
    if (n % 2 == 1 && a[i] == b[i]) return false;
  }
  return true;
}

void solve(void) {
  int n;
  string a, b;
  cin >> n;
  cin >> a;
  cin >> b;

  cout << (check(n, a, b) ? "Deletion succeeded" : "Deletion failed") << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}