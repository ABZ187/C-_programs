#include<iostream>
#include <string.h>
using namespace std;

class C1string{
 public:
  char s[20];
  void getstring(){
    cout<<"Enter string \n";
    cin>>s;
  }
  C1string operator+(C1string a1){
      C1string s1;
      strcat(s,a1.s);
      strcpy(s1.s,s);
      return s1;
  }
  void display(){
    cout<<"\ndisplay\n"<<s;
    }
};
int main(){
C1string a2,a3;
a2.getstring();
a3.getstring();
C1string a4=a2+a3;
a4.display();
}