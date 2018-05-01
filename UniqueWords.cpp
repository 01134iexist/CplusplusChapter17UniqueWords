#include <iostream>
#include <fstream>
#include <set>
#include <string>
using namespace std;

int main()
{
	//opening text file
	fstream textFile;
	cout << "Opening text file..." << endl;
	textFile.open("forChap12.txt", ios::in);
	//creating set
	set<string> text;

	string input;
	if (textFile)
	{
		while (textFile >> input)
		{
			//adding content from text file to set
			text.insert(input);
		}
	}
	else
		cout << "Unable to open file." << endl;
	
	//closing the file
	textFile.close();

	//displaying the contents of the set
	cout << "Here is a list of the unique elements found in the text file document provided : " << endl;
	for (string element : text)
	{
		cout << element << endl;
	}


	system("pause");
	return 0;
}
