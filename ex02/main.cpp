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

		std::cout << "\n>>> iterator Test" << std::endl;
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << "*it:" << *it << std::endl;
			++it;
		}

		std::cout << "\n>>> Copy constructor Test" << std::endl;
		MutantStack<int> cc(mstack);
		MutantStack<int>::iterator ccit = cc.begin();
		MutantStack<int>::iterator ccite = cc.end();
		while (ccit != ccite)
		{
			std::cout << "*ccit:" << *ccit << std::endl;
			++ccit;
		}

		std::cout << "\n>>> Copy assignment Test" << std::endl;
		MutantStack<int> ca;
		ca = mstack;
		MutantStack<int>::iterator cait = ca.begin();
		MutantStack<int>::iterator caite = ca.end();
		while (cait != caite)
		{
			std::cout << "*cait:" << *cait << std::endl;
			++cait;
		}

		std::cout << "\n>>> const iterator Test" << std::endl;
		MutantStack<int>::const_iterator cit = mstack.cbegin();
		MutantStack<int>::const_iterator cite = mstack.cend();
		while (cit != cite)
		{
			std::cout << "*cit:" << *cit << std::endl;
			++cit;
		}

		std::cout << "\n>>> reverse iterator Test" << std::endl;
		MutantStack<int>::reverse_iterator rit = mstack.rbegin();
		MutantStack<int>::reverse_iterator rite = mstack.rend();
		while (rit != rite)
		{
			std::cout << "*rit:" << *rit << std::endl;
			++rit;
		}

		std::stack<int> s(mstack);
	}
	std::cout << "\n<<< vector Test >>>" << std::endl;
	{
		MutantStack<int, std::vector<int> > mstack;

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

		std::cout << "\n>>> iterator Test" << std::endl;
		MutantStack<int, std::vector<int> >::iterator it = mstack.begin();
		MutantStack<int, std::vector<int> >::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << "*it:" << *it << std::endl;
			++it;
		}

		std::cout << "\n>>> Copy constructor Test" << std::endl;
		MutantStack<int, std::vector<int> > cc(mstack);
		MutantStack<int, std::vector<int> >::iterator ccit = cc.begin();
		MutantStack<int, std::vector<int> >::iterator ccite = cc.end();
		while (ccit != ccite)
		{
			std::cout << "*ccit:" << *ccit << std::endl;
			++ccit;
		}

		std::cout << "\n>>> Copy assignment Test" << std::endl;
		MutantStack<int, std::vector<int> > ca;
		ca = mstack;
		MutantStack<int, std::vector<int> >::iterator cait = ca.begin();
		MutantStack<int, std::vector<int> >::iterator caite = ca.end();
		while (cait != caite)
		{
			std::cout << "*cait:" << *cait << std::endl;
			++cait;
		}

		std::cout << "\n>>> const iterator Test" << std::endl;
		MutantStack<int, std::vector<int> >::const_iterator cit = mstack.cbegin();
		MutantStack<int, std::vector<int> >::const_iterator cite = mstack.cend();
		while (cit != cite)
		{
			std::cout << "*cit:" << *cit << std::endl;
			++cit;
		}

		std::cout << "\n>>> reverse iterator Test" << std::endl;
		MutantStack<int, std::vector<int> >::reverse_iterator rit = mstack.rbegin();
		MutantStack<int, std::vector<int> >::reverse_iterator rite = mstack.rend();
		while (rit != rite)
		{
			std::cout << "*rit:" << *rit << std::endl;
			++rit;
		}
	}
	std::cout << "\n<<< list Test >>>" << std::endl;
	{
		MutantStack<int, std::list<int> > mstack;

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

		std::cout << "\n>>> iterator Test" << std::endl;
		MutantStack<int, std::list<int> >::iterator it = mstack.begin();
		MutantStack<int, std::list<int> >::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << "*it:" << *it << std::endl;
			++it;
		}

		std::cout << "\n>>> Copy constructor Test" << std::endl;
		MutantStack<int, std::list<int> > cc(mstack);
		MutantStack<int, std::list<int> >::iterator ccit = cc.begin();
		MutantStack<int, std::list<int> >::iterator ccite = cc.end();
		while (ccit != ccite)
		{
			std::cout << "*ccit:" << *ccit << std::endl;
			++ccit;
		}

		std::cout << "\n>>> Copy assignment Test" << std::endl;
		MutantStack<int, std::list<int> > ca;
		ca = mstack;
		MutantStack<int, std::list<int> >::iterator cait = ca.begin();
		MutantStack<int, std::list<int> >::iterator caite = ca.end();
		while (cait != caite)
		{
			std::cout << "*cait:" << *cait << std::endl;
			++cait;
		}

		std::cout << "\n>>> const iterator Test" << std::endl;
		MutantStack<int, std::list<int> >::const_iterator cit = mstack.cbegin();
		MutantStack<int, std::list<int> >::const_iterator cite = mstack.cend();
		while (cit != cite)
		{
			std::cout << "*cit:" << *cit << std::endl;
			++cit;
		}

		std::cout << "\n>>> reverse iterator Test" << std::endl;
		MutantStack<int, std::list<int> >::reverse_iterator rit = mstack.rbegin();
		MutantStack<int, std::list<int> >::reverse_iterator rite = mstack.rend();
		while (rit != rite)
		{
			std::cout << "*rit:" << *rit << std::endl;
			++rit;
		}
	}
	std::cout << std::endl;	
	return 0;
}
