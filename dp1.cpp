#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll max_sum(vector<ll> a){
  ll sum_=0, max_=0;
  for(int i=0;i<(int)a.size();i++){
    sum_ += a[i];
    max_ = max(sum_, max_);
    sum_ = max(sum_, 0LL);
  }
  return max_;
}

int main(){
  int n;
  cin>>n;
  vector<ll> a(n);
  for(int i=0;i<n;i++)
    cin>>a[i];
  cout<<max_sum(a);
  return 0;
}
