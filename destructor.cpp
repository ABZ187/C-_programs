#include<iostream>

class des{
    public:
    char n;
    //constructor
    des(char a){
        std::cout<<"constructor "<<a<<std::endl;
        n=a;
    }
    //destructor
    ~des(){
        std::cout<<"destructor "<<n<<std::endl;
    }
};

main(){
    des d1('1'),d2('2'),d3('3'); 
    //object will be destroyed in LIFO fashion
}