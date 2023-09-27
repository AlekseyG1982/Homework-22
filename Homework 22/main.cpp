#include<iostream>
#include<ctime>
#include<cstdlib>

template<typename T> void print_arr(T arr[], int const size)
{
	std::cout << "{  ";
	for (int i = 0; i < size; i++) std::cout << arr[i] << "  ";
	std::cout << "}\n";
}

void foo(int *pn, int m)
{	
	int temp = *pn;
	for (int i = 1; i < m; i++)
		(*pn)=(*pn) * temp ;
}

int main()
{
	std::cout << "Task 1\n";
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	

	print_arr(arr, 10);

	for (int i = 0; i < 10; i+=2)
	{
		int temp = *(arr+i);
		*(arr+i) = *(arr+i+1);
		*(arr+i+1) = temp;
	}
	
	print_arr(arr, 10);

	std::cout << "\nTask 2\n";

	std::cout << "Enter the number N - ";
	int n;
	std::cin >> n;
	std::cout << "Enter the degree M - ";
	int m;
	std::cin >> m;
	foo(&n, m);
	std::cout << "N ^ M = "<<n;


	return 0;
}