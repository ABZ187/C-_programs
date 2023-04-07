#include<iostream>
using namespace std;
class con{
    public:
    int a=3;
    int *b= new int(1);
    };
main(){
    con c1;
    cout<<c1.a<<" "<<*c1.b;
}