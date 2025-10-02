#pragma once
#include <string>
#include "Book.h"
#include "Library.h"

class User {
private:
	std::string name;
	Library collection;
	std::vector<Book> markedAsRead;
public:
	Book* currentBook;
	User(std::string name);

	void pickBookByName(const std::string& book);
	void markAsRead(const std::string& book);
};