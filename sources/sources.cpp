#include <iostream>
#include <time.h>

using namespace std;

void print(int* a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

int* f(int* a, int n)
{
	int* ptr = a;
	int pos = 0;
	for (int i = 0; i < n; i++)
	{
		if (*a >= 0)
			pos++;
		a++;
	}
	int* b = new int(pos);
	int index = 0;
	for (int i = 0; i < n; i++)
	{
		if (*ptr >= 0)
		{
			b[index] = *ptr;
			index++;
		}
		ptr++;
	}
	print(b, pos);
	return b;
}

int main()
{
	srand(time(0));
	int* n = new int(10);
	int* a = new int[*n];
	for (int i = 0; i < *n; i++)
		a[i] = rand() % 100-50;
	print(a, *n);
	cout << endl;
	f(a, *n);
	cout << endl;
	delete[] a;
	delete n;
}


