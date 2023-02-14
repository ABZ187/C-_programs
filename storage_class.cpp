#include<iostream>
using namespace std;
int try_static();
int main(){
    int i; // auto type
    register int j; // register type 
    for(i=0;i<100;i++){
        
    }
    cout<<"register variable is "<<i<<endl;
    cout<<"static varible first call "<<try_static()<<endl;
    cout<<"static varible second call "<<try_static()<<endl;
    cout<<"static varible third call "<<try_static()<<endl; // observe the value of s is not destroyed after the function call ends
    return 0;
    }

int try_static(){
    static int s=2;
    s=s+2;
    return s;
}