#include<iostream>
using namespace std;
class Sample
{
	public:
		std::string &name;
		
	Sample(std::string &iname) : name(iname) 
	{ 
		cout << "my constructor" <<endl;
	}
	~Sample()
	{ 
		cout<< "destructor called for" << name << std::end;
    }
};
int main()
{
	Sample s1("bob");
	Sample s2();
	s2 = s1;
	return 0;
}