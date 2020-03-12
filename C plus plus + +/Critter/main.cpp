#include <iostream>


using namespace std;


class critter
{
public:
	int m_Hunger;
	void Greet();
};


void critter::Greet()
{
	cout << "Hi !. I am a  critter and my hunger level is : " ;
	cout << m_Hunger << endl;
}


int main ()
{
	critter crit1;
	critter crit2;


	crit1.m_Hunger=9;
	cout <<"Crit1 hunger level is : " << crit1.m_Hunger ;

	crit2.m_Hunger = 3;
	cout <<"Crit2 hunger level is : " << crit2.m_Hunger ;


	crit1.Greet();
	crit2.Greet();
	return 0;
}
