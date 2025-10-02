#pragma once
#include <string>
#include <cctype>
#include <vector>

namespace utils {
	std::vector<std::string> splitString(const std::string& expression);
	std::string capitalize(const std::string& expression);
}
