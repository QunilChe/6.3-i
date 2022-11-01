#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void Create(int* t, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		t[i] = Low + rand() % (High - Low + 1);
}

void Print(int* t, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << t[i];
	cout << endl;
}


int Sum(int* t, const int size)
{
	int s = 0;
	for (int i = 0; i < size; i++)
		if (t[i] < 0) s += t[i];
	return s;
}

int main()
{
	srand((unsigned)time(NULL));
	const int n = 25;
	int t[n];
	int Low = -5;
	int High = 12;
	Create(t, n, Low, High);
	Print(t, n);
	cout << Sum(t, n);
	return 0;
}
