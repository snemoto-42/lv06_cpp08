template <typename T, typename Container>
MutantStack<T, Container>::MutantStack()
{
	std::cout << GREEN << "MutantStack: " << "Default constructor called" << RESET << std::endl;
}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack()
{
	std::cout << GREEN << "MutantStack: " << "Destructor called" << RESET << std::endl;	
}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(MutantStack const& x)
{
	std::cout << GREEN << "MutantStack: " << "Copy constructor called" << RESET << std::endl;
	*this = x;
}

template <typename T, typename Container>
MutantStack<T, Container> & MutantStack<T, Container>::operator=(MutantStack const& other)
{
	std::cout << GREEN << "MutantStack: " << "Copy assignment operator called" << RESET << std::endl;
	if (this != &other)
	{
		;
	}
	return (*this);		
}

template <typename T, typename Container>
T & MutantStack<T, Container>::top(void)
{
	return std::stack<T, Container>::top();
}

template <typename T, typename Container>
bool MutantStack<T, Container>::empty(void) const
{
	return std::stack<T, Container>::empty();
}

template <typename T, typename Container>
size_t MutantStack<T, Container>::size(void) const
{
	return std::stack<T, Container>::size();
}

template <typename T, typename Container>
void MutantStack<T, Container>::push(T const& ref)
{
	return std::stack<T, Container>::push(ref);
}

template <typename T, typename Container>
void MutantStack<T, Container>::pop(void)
{
	return std::stack<T, Container>::pop();
}
