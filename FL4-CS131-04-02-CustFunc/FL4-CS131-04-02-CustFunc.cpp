#include <iostream>
#include <string>
using namespace std;
// Function declarations
void parameterTester(string first, string second, string third);
int toNumberSize(char lSize);
char toLetterSize(int nSize);
int main() {
	char letterSize;
	int numberSize;
	string pos1, pos2, pos3;
	// test positional nature of parameters
	cout << "Enter three words separated by spaces: ";
	cin >> pos1 >> pos2 >> pos3;
	parameterTester(pos1, pos2, pos3);
	// Convert letter size to number
	cout << "What is your letter size?(s/m/l): ";
	cin >> letterSize;
	cout << "Try on a size " << toNumberSize(letterSize) << endl;
	// Convert number size to letter
	cout << "What is your number size?(28-48): ";
	cin >> numberSize;
	cout << "Try on a size " << toLetterSize(numberSize) << endl;
	system("pause");
	return 0;
}
// Function definitions
// Custom function to test position of parameters.
void parameterTester(string first, string second, string third)
{
	cout << "First parameter is " << first << endl;
	cout << "Second parameter is " << second << endl;
	cout << "Third parameter is " << third << endl;
	return;
}
// Custom function to convert s/m/l to number sizes.
int toNumberSize(char lSize)
{
	if (lSize == 's')
		return 34;
	else if (lSize == 'm')
		return 36;
	else if (lSize == 'l')
		return 40;
	else
		return 0;
}
// Custom function to convert number sizes to s/m/l.
char toLetterSize(int nSize)
{
	if (nSize < 36)
		return 's';
	else if (nSize < 40)
		return 'm';
	else
		return 'l';
}