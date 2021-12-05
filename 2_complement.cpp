#include<bits/stdc++.h>

using namespace std;

int main(){

    int i, carry = 1;

    string num, one="", two="";

    cin>>num;

    int SIZE=num.size();

    for(i = 0; i <SIZE ; i++){

      if(num[i] == '0'){

        one.push_back('1');

    }

      else if(num[i] == '1'){

        one.push_back('0');

    }

}

for(i = SIZE - 1; i >= 0; i--){

    if(one[i] == '1' && carry == 1){

      two.push_back('0');

    }

    else if(one[i] == '0' && carry == 1){

      two.push_back('1');

      carry = 0;

    }

    else{

      two.push_back(one[i]);

    }
  
  }

  cout<<"Two's Complement of given number is "<<two;

  return 0;

}
