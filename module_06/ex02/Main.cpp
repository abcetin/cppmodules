#include "Base.hpp"
#include <unistd.h>

class A : public virtual Base{};
class B : public virtual Base{};
class C : public virtual Base{};

Base *generate(void)
{
	srand(time(NULL));
	int random = rand() % 3;
	Base *ret;
	switch (random)
	{
	case 0:
		ret = new A();
		break;
	case 1:
		ret = new B();
		break;
	case 2:
		ret = new C();
		break;
	}
	return ret;
}

void identify(Base *p)
{
	A *a;
	B *b;
	C *c;

	if ((a = dynamic_cast<A *>(p)))
		std::cout << "A" << std::endl;
	else if ((b = dynamic_cast<B *>(p)))
		std::cout << "B" << std::endl;
	else if ((c = dynamic_cast<C *>(p)))
		std::cout << "C" << std::endl;
}

void identify(Base &p)
{
	Base *tmp = &p;
	A *a;
	B *b;
	C *c;

	if ((a = dynamic_cast<A *>(tmp)))
		std::cout << "A" << std::endl;
	else if ((b = dynamic_cast<B *>(tmp)))
		std::cout << "B" << std::endl;
	else if ((c = dynamic_cast<C *>(tmp)))
		std::cout << "C" << std::endl;
}

int main(void)
{
	Base *a;
	{
		a = generate();
		identify(a);
		identify(*a);
		usleep(700000);
		delete a;
	}
	{
		a = generate();
		identify(a);
		identify(*a);
		usleep(700000);
		delete a;
	}
	{
		a = generate();
		identify(a);
		identify(*a);
		usleep(700000);
		delete a;
	}
	{
		a = new C();
		identify(a);
		identify(*a);
		delete a;
	}
}