#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline bool check(int n, const vector<vector<bool>> &b) {
  for (int i=0; i<n; i++) for (int j=0; j<n-1; j++) {
    if (b[i][j]) return false;
  }
  return true;
}

bool solve(int idx) {
  int n; cin >> n;
  if (n == 0) return false;

  vector<string> a(n);
  vector<vector<bool>> b(n, vector<bool>(n-1));
  for (int i=0; i<n; i++) {
    cin >> a[i];
    for (int j=0; j<n-1; j++) {
      char c; cin >> c;
      b[i][j] = c == 'N';
    }
  }

  cout << "Group " << idx << "\n";
  if (check(n, b)) {
    cout << "Nobody was nasty\n\n";
    return true;
  }

  for (int i=0; i<n; i++) for (int j=0; j<n-1; j++) {
    if (!b[i][j]) continue;
    cout << a[(i-j+n-1) % n] << " was nasty about " << a[i] << "\n";
  }
  cout << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int idx = 1;
  while (solve(idx++));
  return 0;
}