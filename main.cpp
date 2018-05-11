#include <iostream>

#include "sorting.h"
#include "models.h"

void testFraction();

void testInt();

int main()
{
	testInt();
	testFraction();
}

void testFraction()
{
	Fraction *a;
	int n;
	
	std::cout << "Test fraction type" << std::endl;
	std::cout << "Order by ascending" << std::endl;
	
	inputArray(a, n);
	sortArray(a, n, orderByAcs);
	outputArray(a, n);

	delete[] a;
}

void testInt()
{
	int *a;
	int n;
	
	std::cout << "Test int type" << std::endl;
	std::cout << "Order by descending" << std::endl;
	
	inputArray(a, n);
	sortArray(a, n, orderByDes);
	outputArray(a, n);

	delete[] a;
}









