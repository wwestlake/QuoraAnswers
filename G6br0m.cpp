#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<char> vch_upper_case;
	vector<char> vch_lower_case;
	vector<char>::iterator i;


  // loop through char and write upper case and lower case letters in vectors
  
	for (unsigned char j = 0; j < 255; j++)
	{
		if (j >= 64 && j <= 89)
		{
			vch_upper_case.push_back(j);
		}
		if (j >= 96 && j <= 121)
		{
			vch_lower_case.push_back(j);
		}
	}


  // loop through vectors and print them
  
	for (i = vch_upper_case.begin(); i < vch_upper_case.end(); i++)
	{
		cout << *i << endl;
	}
	for (i = vch_lower_case.begin(); i < vch_lower_case.end(); i++)
	{
		cout << *i << endl;
	}

	cin.get();

	return 0;
}