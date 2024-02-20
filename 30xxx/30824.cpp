#include <iostream>
#include <vector>
using namespace std;

vector<long long> precompute(void) {
  vector<long long> f(79);
  f[0] = 0; f[1] = 1;
  for (int i=2; i<=78; i++) {
    f[i] = f[i-1] + f[i-2];
  }
  return f;
}

bool solve(vector<long long>& f) {
  long long k, x; cin >> k >> x;

  if (k == 1) {
    for (int i=1; i<=78; i++) {
      if (f[i] == x) return true;
    }
  } else if (k == 2) {
    for (int i=1; i<=78; i++) {
      for (int j=1; j<=78; j++) {
        if (f[i] + f[j] == x) return true;
      }
    }
  } else {
    for (int i=1; i<=78; i++) {
      for (int j=1; j<=78; j++) {
        for (int l=1; l<=78; l++) {
          if (f[i] + f[j] + f[l] == x) return true;
        }
      }
    }
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<long long> f = precompute();

  int t; cin >> t;
  while (t--) cout << (solve(f) ? "YES" : "NO") << "\n";
  return 0;
}