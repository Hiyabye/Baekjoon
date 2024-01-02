#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

template <typename T>
class LazySegmentTree {
private:
  vector<T> tree;
  vector<T> lazy;
  vector<T> arr;
  int n;
  T (*func)(T, T);

  void init(int node, int start, int end) {
    if (start == end) {
      tree[node] = arr[start];
    } else {
      init(node*2, start, (start+end)/2);
      init(node*2+1, (start+end)/2+1, end);
      tree[node] = func(tree[node*2], tree[node*2+1]);
    }
  }

  void propagate(int node, int start, int end) {
    if (lazy[node] != 0) {
      tree[node] += (end-start+1)*lazy[node];
      if (start != end) {
        lazy[node*2] += lazy[node];
        lazy[node*2+1] += lazy[node];
      }
      lazy[node] = 0;
    }
  }

  T query(int node, int start, int end, int left, int right) {
    propagate(node, start, end);
    if (left > end || right < start) return 0;
    if (left <= start && end <= right) return tree[node];
    T lval = query(node*2, start, (start+end)/2, left, right);
    T rval = query(node*2+1, (start+end)/2+1, end, left, right);
    return func(lval, rval);
  }

  void update(int node, int start, int end, int left, int right, T val) {
    propagate(node, start, end);
    if (left > end || right < start) return;
    if (left <= start && end <= right) {
      tree[node] += (end-start+1)*val;
      if (start != end) {
        lazy[node*2] += val;
        lazy[node*2+1] += val;
      }
      return;
    }
    update(node*2, start, (start+end)/2, left, right, val);
    update(node*2+1, (start+end)/2+1, end, left, right, val);
    tree[node] = func(tree[node*2], tree[node*2+1]);
  }

public:
  LazySegmentTree(vector<T> &arr, T (*f)(T, T)) : arr(arr), func(f) {
    n = arr.size();
    int h = (int)ceil(log2(n));
    int tree_size = (1 << (h+1));
    tree.resize(tree_size);
    lazy.resize(tree_size);
    init(1, 0, n-1);
  }

  T query(int left, int right) {
    return query(1, 0, n-1, left, right);
  }

  void update(int left, int right, T val) {
    update(1, 0, n-1, left, right, val);
  }
};

long long add(long long a, long long b) {
  return a + b;
}

void solve(void) {
  int n, m, k;
  cin >> n >> m >> k;
  vector<long long> arr(n);
  for (int i=0; i<n; i++) {
    cin >> arr[i];
  }
  LazySegmentTree<long long> lst(arr, add);

  long long a, b, c, d;
  for (int i=0; i<m+k; i++) {
    cin >> a >> b >> c;
    if (a == 1) {
      cin >> d;
      lst.update(b-1, c-1, d);
    } else {
      cout << lst.query(b-1, c-1) << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}