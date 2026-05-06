#include "pch.h"
#include "containers.h"

void containers::addstring(const std::string& str) {
	items.push_back(str);
}

std::string containers::FirstChars() const {
	std::string result = "";
	for (int i = 0; i < items.size(); i++)
	{
		if (items[i].length() > 0) {
			result += items[i][0];
		}
	}
	return result;
}

std::string containers::shortest() const {
	if (items.size() == 0) {
		return "";
	}
	std::string shortest = items[0];
	for (int i = 1; i < items.size(); i++)
	{
		if (items[i].length() < shortest.length()) {
			shortest = items[i];
		}
	}
	return shortest;
}

double containers::frequency(char c) const {
	int count = 0;
	int total = 0;
	for (int i = 0; i < items.size(); i++)
	{
		std::string str = items[i];
		for (int j = 0; j < str.length(); j++)
		{
			total++;

			if (str[j] == c) {
				count++;
			}
		}
	}
	if (total == 0) {
		return 0;
	}
	return (double)count / total;
}