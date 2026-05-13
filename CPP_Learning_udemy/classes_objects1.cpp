#include<iostream>
#include<string>

class Person{
    private:
    std::string first;
    std::string last;

    public:
    Person(std::string first, std::string last : first(first), last(last)){}
    void setFirstName(std::string first){ this->first = first;}
    void setLastName(std::string last) {this->last = last;}
    std::string getFullName(){
        return first + "" + last;
    }
    void printFullName(){
        std::cout << first << " " << last << std::endl;
    }

};

int main()
{
    Person P1, P2;

    P1.setFirstName("Brandyn");
    P1.setLastName("Campos");
    P2.setFirstName("Boab");
    P2.setLastName("Marley");

    P1.printFullName();
    P2.printFullName();
    P1.getFullName();
    P2.getFullName();


}

