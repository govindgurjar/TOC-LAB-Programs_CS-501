#include <iostream>

using namespace std;

int main()

{

          char Input[100];

          char stack[100];

          int Top = -1;

          cin>>Input;

          stack[++Top] = 'Z';//Taking 'Z'as an initial stack symbol.

          int i=-1;

          q0:

                  i++;

                  if(Input[i]=='(' && stack[Top]== 'Z')

                  {

                      stack[++Top]= '(';

                      goto q0;

                  }

                  else if(Input[i]=='(' && stack[Top]== '(')

                  {

                      stack[++Top]= '(';

                      goto q0;

                  }

                  else if(Input[i]==')' && stack[Top]== '(')

                  {

                      Top--;

                      goto q0;

                  }

                  else if(Input[i]=='\0' && stack[Top]== 'Z')

                  {

                      Top--;

                      goto q1;

                  }

                  else

                  {

                      goto Invalid;

                  }

           q1:

                  cout<<"Valid String";

                  return 0;

           Invalid:

                  cout<<"Invalid String";

                  return 0;
}
