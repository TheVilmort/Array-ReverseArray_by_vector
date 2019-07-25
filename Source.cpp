#include "Header.h"
using namespace std;
int main()
{
	srand(time(NULL));
	int* size = new int;
	cout << "Enter number of elements in array: ";
	cin >> *size;
	vector<int> myVector;
	for (int it0 = 0; it0 < *size; it0++)
	{
		myVector.push_back(rand() % *size);
	}
	for (vector<int>::iterator it1 = myVector.begin(); it1 != myVector.end(); it1++)
	{
		cout << *it1 << "\t";
	}
	cout << "\n";
	for (vector<int>::reverse_iterator it2 = myVector.rbegin(); it2 != myVector.rend(); it2++)
	{
		cout << *it2 << "\t";
	}
	delete size;
	return 0;
}