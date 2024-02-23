#include "MutantStack.hpp"
#include <list>

int main()
{
	std::cout << "\n<<< default(deque) Test >>>" << std::endl;
	{
		MutantStack<int> mstack;

		std::cout << "empty:" << mstack.empty() << std::endl;

		mstack.push(6);
		mstack.push(17);
		std::cout << "top:" << mstack.top() << std::endl;

		mstack.pop();
		std::cout << "top:" << mstack.top() << std::endl;
		std::cout << "size:" << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		std::cout << "size:" << mstack.size() << std::endl;

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		
		++it;
		--it;
		while (it != ite)
		{
			std::cout << "*it:" << *it << std::endl;
			++it;
		}

		MutantStack<int> cc(mstack);
		MutantStack<int>::iterator ccit = cc.begin();
		MutantStack<int>::iterator ccite = cc.end();
		while (ccit != ccite)
		{
			std::cout << "*ccit:" << *ccit << std::endl;
			++ccit;
		}

		MutantStack<int> ca;
		ca = mstack;
		MutantStack<int>::iterator cait = ca.begin();
		MutantStack<int>::iterator caite = ca.end();
		while (cait != caite)
		{
			std::cout << "*cait:" << *cait << std::endl;
			++cait;
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
