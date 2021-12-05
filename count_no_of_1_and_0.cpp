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

          cout<<"Count of 1’s:"<<cnt1<<endl<<"Count of 0’s:"<<cnt0;

          return 0;

}
