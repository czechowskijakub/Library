#pragma once
#include <vector>
#include "Book.h"

class Library {
private:
	std::vector<Book> collection;
public:
	void add(const Book& book);
	void remove(int ID);
	Book* findByTitle(const std::string& title);
	void displayCollection();
};