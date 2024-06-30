#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  for (int i=0; i<n; i++) {
    cout << "? " << v[i] << endl;
    int a; cin >> a;
    cout << "? " << v[i] << endl;
    int b; cin >> b;

    if (a | b) {
      cout << "! " << v[i] << endl;
      return;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}