#include "utilities.h"
#include <iostream>
#include <cctype>

namespace utils {

	// splitString
	std::vector<std::string> splitString(const std::string& expression) {

		std::vector<std::string> words;
		std::string word;

		for (char c : expression) {
			if (c != ' ') {
				word += c;
			}
			else if (c == ' ' && word != "") {
				words.push_back(word);
				word = "";
			}
		}
		if (word != "") words.push_back(word);
		return words;
	}

	// capitalize
	std::string capitalize(const std::string& expression) {
		std::vector<std::string> expressionSplit = splitString(expression);
		for (std::string& word : expressionSplit) {
			if (!word.empty()) {
				word[0] = toupper(word[0]);
				for (size_t i = 1; i < word.size(); i++) {
					word[i] = tolower(word[i]);
				}
			}
		}

		std::string formatedExpression;
		int spacesNeeded = expressionSplit.size() - 1;
		for (std::string& word : expressionSplit) {
			if (spacesNeeded > 0) {
				std::string spaced = word + " ";
				formatedExpression += spaced;
				spacesNeeded--;
			} else {
				formatedExpression += word;
			}
		}
		return formatedExpression;
	}

	//

}