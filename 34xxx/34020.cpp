#include <iomanip>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  priority_queue<double, vector<double>, greater<double>> pq;
  while (n--) {
    double a; cin >> a;
    pq.push(a);
  }

  while (pq.size() > 1) {
    double a = pq.top(); pq.pop();
    double b = pq.top(); pq.pop();
    pq.push((a + b) / 2);
  }
  cout << fixed << setprecision(10) << pq.top();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}