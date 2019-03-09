#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

template <typename t>
t foo(t a)
{
	return a * a;
}



int main()
{
	typedef std::vector <int> ray;
	ray firstray(10);

	for (int i = 0; i < 10; i++) 
	{
		std::for_each(firstray.begin(), firstray.end(), firstray);
		std::cout<<f
	}
		
	std::cout << foo(5) << std::endl;
	std::cout << foo(5.55) << std::endl;
	std::copy(std::begin(firstray), std::end(firstray), std::ostream_iterator<int>(std::cout, " "));


	system("pause");
	return 0;
}
