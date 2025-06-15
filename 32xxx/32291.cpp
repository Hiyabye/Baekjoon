#include <iostream>
#include <set>
using namespace std;

void solve(void) {
  long long x; cin >> x; x++;
  set<long long> st; st.insert(1);
  for (long long i=2; i*i<=x; i++) {
    if (x % i) continue;
    st.insert(i); st.insert(x / i);
  }

  for (long long k : st) {
    cout << k << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}