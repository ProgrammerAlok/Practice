#include<bits/stdc++.h>
using namespace std;

int helper(string &s)
{
    // {char, {count, index}}
    map< char, pair<int, int> > m;
    queue<char> que;
    for(int i=0; i<s.size(); ++i){
        if(m.find(s[i])!=m.end()){
            m[s[i]].first++;
        }
        else{
            m.insert({s[i], {1, i}});
            que.push(s[i]);
        }
    }
    while(!que.empty()){
        auto it = *m.find(que.front());
        que.pop();
        if(it.second.first == 1) return it.second.second;
    }
    return -1;
}

int main()
{
  string a = "input";
  cout << helper(a);

  return 0;
}

