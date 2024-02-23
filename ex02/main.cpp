#include "MutantStack.hpp"
#include <list>

int main()
{
	std::cout << "\n<<< sample Test >>>" << std::endl;
	{
		MutantStack<int> mstack;

		std::cout << mstack.empty() << std::endl;

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
		std::stack<int> s(mstack);
	}
	// std::cout << "\n<<< vector Test >>>" << std::endl;
	// {
	// 	MutantStack<int, std::vector<int> > mstack;
	// }
	// std::cout << "\n<<< list Test >>>" << std::endl;
	// {
	// 	MutantStack<int, std::list<int> > mstack;
	// }
	std::cout << std::endl;	
	return 0;
}
