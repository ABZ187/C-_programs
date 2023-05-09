#include<iostream>
#include<string>

class acc_holder{
    public:
    std::string name;
    char acc_type;
    int acc_no ;
    float balance;

    acc_holder(std::string n,char type,int no,float bal ){
        name=n;
        acc_type=type;
        acc_no=no;
        balance=bal;
    }
    
     acc_holder(){
        std::cout<<"Enter name\n";
        std::cin>>name;
        std::cout<<"Enter acc type\n";
        std::cin>>acc_type;
        std::cout<<"Enter acc_no\n";
        std::cin>>acc_no;
        std::cout<<"Enter ballance\n";
        std::cin>>balance;
    }
    
    float deposit(float a){
        balance=balance+a;
        return balance;
    }
    
    float withdraw(float a){
        if (balance>=a){
            balance=balance-a;
            return balance;
        }
        
        else{
            std::cout<<"\nInsuffient balance";
            return -1;
        }
    }
    void check(){
        std::cout<<"\nAccount holder's name "<<name<<"\nAccount balance is "<<balance;
    }
    


};

int main(){
    acc_holder a1("abc",'s',648465,653.5);
    // acc_holder a2;
    std::cout<<a1.name;
    a1.deposit(6665);
    std::cout<<a1.withdraw(61);
    a1.withdraw(61946168);
    a1.check();
    return 0;
}

