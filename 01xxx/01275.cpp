#include <bits/stdc++.h>

using namespace std;
template <typename T>

class SegmentTree {
private:
  vector<T> tree;
  vector<T> a;
  int n;
  T (*func)(T, T);

  void init(int node, int start, int end) {
    if (start == end) {
      tree[node] = a[start];
    } else {
      init(node*2, start, (start+end)/2);
      init(node*2+1, (start+end)/2+1, end);
      tree[node] = func(tree[node*2], tree[node*2+1]);
    }
  }

  T query(int node, int start, int end, int left, int right) {
    if (left > end || right < start) return 0;
    if (left <= start && end <= right) return tree[node];
    T lval = query(node*2, start, (start+end)/2, left, right);
    T rval = query(node*2+1, (start+end)/2+1, end, left, right);
    return func(lval, rval);
  }

  void update(int node, int start, int end, int index, T val) {
    if (index < start || index > end) return;
    if (start == end) {
      a[index] = val;
      tree[node] = val;
      return;
    }
    update(node*2, start, (start+end)/2, index, val);
    update(node*2+1, (start+end)/2+1, end, index, val);
    tree[node] = func(tree[node*2], tree[node*2+1]);
  }

public:
  SegmentTree(vector<T> &arr, T (*f)(T, T)) : a(arr), func(f) {
    n = arr.size();
    int h = (int)ceil(log2(n));
    int tree_size = (1 << (h+1));
    tree.resize(tree_size);
    init(1, 0, n-1);
  }

  T query(int left, int right) {
    return query(1, 0, n-1, left, right);
  }

  void update(int index, T val) {
    update(1, 0, n-1, index, val);
  }
};

long long add(long long a, long long b) {
  return a + b;
}

void solve(void) {
  int n, q, x, y, a, b;
  cin >> n >> q;
  vector<long long> arr(n);
  for (int i=0; i<n; i++) {
    cin >> arr[i];
  }
  SegmentTree<long long> st(arr, add);

  for (int i=0; i<q; i++) {
    cin >> x >> y >> a >> b;
    if (x > y) swap(x, y);
    cout << st.query(x-1, y-1) << "\n";
    st.update(a-1, b);
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}