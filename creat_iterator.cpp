#include <iostream>
#include <vector>

//namespace std

int main()
{
	std::vector<int> vec {0,1,2,3,4,5,6,7,8,9}; // create a vector of integer numbers

	std::cout<< "the vector contain:";//show the different number of the vector
/*
* std::vector<int>::iterator it = vec.begin() ==> creat an iterator it and intiate it in the begining of the vector with vec.begin()
* it != vec.end() ==> this instruction compared the actual value of it with the last value gived by vec.end()
* ++it ==> it = it + 1
* *it ==> show the value pointed by the iterator it 
**/
	for (std::vector<int>::iterator it=vec.begin(); it!= vec.end();++it) 
	{
		std::cout << ' ' << *it;
	}
	std::cout << ' ' << endl;
/*
* If you want to print the different elts of vec from the end to the begining you will use reverse_iterator, vec.rbegin() and vec.rend()
**/
	std::cout<< "the reverse vector:";
	for(std::vector<int>::reverse_iterator it = vec.rbegin() ; it != vec.rend() ; ++it)
	{
		std::cout << ' ' << *it;
	}
	
	std::cout << ' ' << endl;

/*
* constant iterator: we use const_iterator(), vec.cbegin(), vec.cend()
**/

	std::cout<< "the const iterator show:";
	for(std::vector<int>::const_iterator it = vec.cbegin() ; it != vec.cend() ; ++it)
	{
		std::cout << ' ' << *it;
	}
	
	std::cout << ' ' << endl;

/*
* constant iterator: we use const_reverse_iterator(), vec.crbegin(), vec.crend()
**/

	std::cout<< "the const reverse iterator show:";
	for(std::vector<int>::const_reverse_iterator it = vec.crbegin() ; it != vec.crend() ; ++it)
	{
		std::cout << ' ' << *it;
	}
	
	std::cout << ' ' << endl;

/*
* Iterate and modify
**/

	std::vector<int> v(10);
	int i = 0;
	for(std::vector<int>::iterator it = v.begin() ; it != v.end() ; ++it)
	{
		*it = i++;
	}
/* in C++11 **/

	for(int &it : v)
	{
		it = i++;
	}
	return 0;
}
