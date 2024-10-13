
#include <iostream>
#include <queue>
#include <Windows.h>
#include "colors/colors.hpp"
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
	queue<string> wordQueue;
	ifstream file("input.txt.txt");
	if (!file)
	{
		cout << "unable to open up the file";
	}
	string word{};
	while (file >> word) {
		wordQueue.push(word);
	}
	file.close();
	int wordsperline = 60;
	int count{};
	while (!wordQueue.empty()) {
		cout<< colors::bright_green << wordQueue.front() << " " <<	colors::reset;
		wordQueue.pop();
		count++;
		if (count % wordsperline == 0)
		{
			cout << endl << endl;
		}
		Sleep(100);
	}
	return 0;
}

