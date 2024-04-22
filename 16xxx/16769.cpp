#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> c(3), m(3);
  for (int i=0; i<3; i++) cin >> c[i] >> m[i];

  for (int i=0; i<100; i++) {
    m[(i+1)%3] += m[i%3];
    if (m[(i+1)%3] > c[(i+1)%3]) {
      m[i%3] = m[(i+1)%3] - c[(i+1)%3];
      m[(i+1)%3] = c[(i+1)%3];
    } else {
      m[i%3] = 0;
    }
  }

  for (int i=0; i<3; i++) cout << m[i] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}