#include "Book.h"
#include "utilities.h"
#include <iostream>

int Book::nextID = 1;

Book::Book(std::string title, std::string author, std::string category) {
	this->ID = nextID++;
	this->title = utils::capitalize(title);
	this->author = utils::capitalize(author);
	this->category = utils::capitalize(category);
}

const std::string Book::getTitle() const { return this->title; }
const std::string Book::getAuthor() const { return this->author; }
const std::string Book::getCategory() const { return this->category; }

int Book::getID() const { return this->ID; }

void Book::setTitle(const std::string newtitle) { this->title = newtitle; }
void Book::setAuthor(const std::string newAuthor) { this->author = newAuthor; }
void Book::setCategory(const std::string newCategory) { this->category = newCategory; }

void Book::displayInfo() {
	std::cout << '[' << getID() << "] " << getTitle() << ", "
		<< getAuthor() << ", "
		<< getCategory() << '\n';
}

