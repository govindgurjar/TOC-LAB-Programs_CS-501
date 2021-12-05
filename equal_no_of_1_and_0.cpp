#include <bits/stdc++.h>

using namespace std;

int main() {

           string s;

           cin>>s;

           int cnt1=0,cnt0=0;

          for(int i=0;i<s.size();i++)

          {

          if(s[i]=='1') cnt1++;

          else cnt0++;

          }

          if(cnt1==cnt0) cout<<"Accepted\n";

          else cout<<"Rejected\n";

          return 0;

}
