#include<iostream>
//#include<iostream>
using namespace std;
class Gfg{
    public:
    static void printHello();


};

void Gfg::printHello(){
    cout<<"Hello World";
}

int main(){

    Gfg::printHello();
    return 0;
    
}
