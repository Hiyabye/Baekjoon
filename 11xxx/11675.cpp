#include <iostream>
#include <vector>
using namespace std;

vector<int> precompute(void) {
  vector<int> ret(256);
  for (int i=0; i<256; i++) {
    ret[(i ^ (i << 1)) % 256] = i;
  }
  return ret;
}

void solve(const vector<int> &v) {
  int b; cin >> b;

  cout << v[b] << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> v = precompute();
  
  int n; cin >> n;
  while (n--) solve(v);
  return 0;
}