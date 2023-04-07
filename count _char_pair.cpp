#include<iostream>
#include<string>
class count{
    public:
    std::string a;
    std::string b;
    count(std::string c){
        a=c;
    }

    int sear(std::string d){
        int i {0};
        int j {0};
        for(;i<a.length();i++){
            if (a[i]==d[0] && a[i+1]==d[1]){
                j++;
            }
        }
        return j;
    }
    ~count(){
        
    }
};

main(){
    count c1("abcabcaca");
    std::cout<<c1.sear("ca");
}