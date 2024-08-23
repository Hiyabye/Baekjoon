#include <iomanip>
#include <iostream>
#include <queue>
using namespace std;

void solve(void) {
  int n; cin >> n;
  priority_queue<double, vector<double>, greater<double>> pq;
  while (n--) {
    double x; cin >> x;
    pq.push(x);
  }

  while (pq.size() > 1) {
    double a = pq.top(); pq.pop();
    double b = pq.top(); pq.pop();
    pq.push((a + b) / 2);
  }
  cout << fixed << setprecision(7) << pq.top();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}