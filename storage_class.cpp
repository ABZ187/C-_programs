#include<iostream>
// #include"storage_class_extern.cpp"
using namespace std;
extern void x_square(int x);
extern int ext; // extern type run first storage_class_extern.cpp
int main(){
    int i; // auto type
    register int j; // register type 
    x_square(ext);
    return 0;
}