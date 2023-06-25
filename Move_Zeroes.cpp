#include<bits/stdc++.h>
using namespace std;

void helper(vector<int> &a)
{
    int i(0), j(0), n(a.size());
    while(a[i] != 0 && a[j] != 0){
            i++; j++;
    }
    while(i < n){
        if(a[i] != 0){
            swap(a[i], a[j]);
            i++; j++;
        }
        else i++;
    }
}

int main()
{
  vector<int> a = { 0, 1, 0, 3, 12 };
  helper(a);
  for(auto i:a)  cout<<i<<" ";

  return 0;
}
