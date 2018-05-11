#include <iostream>

template <class T>
void swap(T &a, T &b)
{
    T c = a;
    a = b;
    b = c;
}

template <class T>
void sortArray(T *a, int n, bool (*compare)(T a, T b))
{
    for (int i = 0; i < n; ++i)
        for (int j = i + 1; j < n; ++j)
            if (compare(a[i], a[j]))
                swap(a[i], a[j]);
}

template <class T>
void inputArray(T *&a, int &n)
{
	std::cout << "Size: ";
	std::cin >> n;
	
	a = new T[n];
	
	for (int i = 0; i < n; ++i)
	{
		std::cout << "a[" << i << "]: "; 
		std::cin >> a[i];
	}
}

template <class T>
void outputArray(T *a, int n)
{
	for (int i = 0; i < n; ++i)
		std::cout << a[i] << " "; 
	std::cout << std::endl;
}
