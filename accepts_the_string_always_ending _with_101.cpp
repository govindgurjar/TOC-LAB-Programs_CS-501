#include <bits/stdc++.h>

using namespace std;

int main() {

          string s;

          cin>>s;

          int size=s.size();

          if(s[size-1]=='1' and s[size-2]=='0' and s[size-3]=='1') cout<<"Accepted";

          else cout<<"Rejected";

          return 0;

}
