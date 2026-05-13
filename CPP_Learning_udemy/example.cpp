
#include<iostream>
#include<string>

class Sample
{
	public:
		std::string &name;
		
	Sample(std::string &iname) : name(iname) 
	{ 
		std::cout << "my constructor" <<std::endl;
	}
	~Sample()
	{ 
		std::cout<< "destructor called for" << name << std::endl;
    }
};
int main()
{
    //Sample s1, s2;
	Sample s1("Bob");
	Sample s2();
	s2() = s1;
	return 0;
}