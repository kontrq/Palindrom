#include "pch.h" 
#include <iostream> 
#include <string> 
#include <vector> 
using namespace std;
//bool IsPalindrom(const string& s)
//{
//	int i = 0;
//	int size = s.size();
//	while (1)
//	{
//		if (!(s[i] == s[size - i - 1]))
//			return false;
//		else if ((i == (size - i - 1)) || ((i - (size - i - 1)) == 1))
//			return true;
//		i++;
//	}
//}
bool IsPalindrom(const string& s)
{
	string word = s;
	reverse(word.begin(), word.end());
	return (s == word);
}

vector<string> PalindromFilter(const vector<string>& words, size_t minLength, size_t maxLenght)
{
	vector<string> output;

	for (const auto& word : words) {
		if (IsPalindrom(word) && word.size() >= minLength && word.size() <= maxLenght) {
			output.push_back(word);
		}
	}

	return output;
}

int main()
{
	vector<string> words = { "alfavitivafla","alfavit","madam","mom",";kuk;",";palindrom" };
	int minLength = 3;
	int maxLength = 20;
	int sh = 0;
	string a = "";
	for (string i : PalindromFilter(words, minLength, maxLength)) {
		sh++;
		if (sh > 1) { a = ", "; }
		cout << a << i;

	}
	return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
