#include "MutantStack.hpp"
#include <list>

int main()
{
	std::cout << "\n<<< sample Test >>>" << std::endl;
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;

		mstack.pop();
		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		std::cout << mstack.size() << std::endl;

		MutantStack<int>::iterator it = mstack.begin();

		MutantStack<int>::iterator ite = mstack.end();
		
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		// std::stack<int> s(mstack);
		// std::list<int> l(mstack);
	}
	std::cout << std::endl;	
	return 0;
}
