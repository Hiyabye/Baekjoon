#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(void) {
  vector<int> a(5);
  for (int i=0; i<5; i++) cin >> a[i];

  for (int i=0; i<5; i++) {
    for (int i=0; i<4; i++) {
      if (a[i] > a[i+1]) {
        swap(a[i], a[i+1]);
        for (int j=0; j<5; j++) cout << a[j] << " ";
        cout << "\n";;
      }
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}