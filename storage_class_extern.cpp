#include <iostream>
using namespace std;
extern int ext = 5 ;
extern void x_square(int x);
void x_square(float x=1){
    cout<<"sqaure is "<<x*x;;
}
// int main(){
//     cout<<"Extern variable ext is "<<ext;
// }
