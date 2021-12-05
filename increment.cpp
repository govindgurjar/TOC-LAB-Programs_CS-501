#include <iostream>

using namespace std;

int main()

{int len,i; string
    n,comp;
    bool firstone=false;
    cin>>n;
    len=n.length();
    comp.resize(len);
    for( i=(len-1); i>=0 ; i-- )

    {if(firstone==false)

        {

              if(n[i]=='1')

              {

                    comp[i]='0';

              }

              else

              {

                    comp[i]='1';

                    firstone=true;

              }

        }

        else

        {

           comp[i]=n[i];

        }

   }

 cout<<"INCREMENTED NUMBER : "<<comp;

return 0;

}
