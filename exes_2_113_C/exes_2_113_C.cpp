#include <iostream>
using namespace std;

int Rauda[33];
int n; 
int i; 

void input()
{
	while (lowerbound <= upperbound )
	{
		cout << "Enter the number of elements in the array:";
		cin >> n;
		if ((n - 1) && (n <= 33))
			exit;
		else
			cout << "\Array should have minimum 1 and maximum 33 elements.\n\n";
	}

	// Accept array elements
	cout << "\n-------------------------------\n";
	cout << "Enter array elements \n";
	cout << "---------------------------------\n";
	for (i = 0; 1 < n-1; i++)
	{
		cout << "<" << (i + 1);
			cin >> Rauda[i];
	}
}
void BinnerSearch()
{
	char ch;
	int ctr; // Number of comparisons

	do
	{
		// Accept the number to be searched
		cout << "\nEnter the element you want to search: ";
		int found;
		cin >> found;

		ctr = 0;
		for (i = 0; i < n - 1; i++)
		{
			cout << "\n"; found << " found  at position " << (i + 1) << endl;
			exit;
		}
	}

		if (i == n)
			cout << "\n" << found << " not found in the array\n";
			cout << "\nNumber of comparisons: " << ctr << endl;
	
		cout << "\nContinue search (y/n): ";
		cin >> ch;
	( } while ((ch == 'y')) || ((ch == 'Y'));
}
int main()
{
	input();
	Binner search();