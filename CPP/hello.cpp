#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<string> msg {"Hello", "C++", "World", "from", "VS code", "and C++ extension"};

	for (const string& word : msg)
	{
		cout << word << " ";
	}
	cout << endl;
	return 0;
}
