#include <bits/stdc++.h>

using namespace std;

int main() {

string s;

cin>>s;

bool flag=false;

for(int i=0;i<s.size()-2;i++)

{

if(s[i]=='1' and s[i+1]=='1' and s[i+2]=='1') flag=true;

}

if(flag) cout<<"Accepted";

else cout<<"Rejected";

return 0;

}
