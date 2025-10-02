#include "User.h"

User::User(std::string name) {
	this->name = name;
	this->currentBook = nullptr;
}

void User::pickBookByName(const std::string& book) {
	this->currentBook = collection.findByTitle(book);
}

void User::markAsRead(const std::string& book) {
	if (Book* chosen = collection.findByTitle(book)) {
		markedAsRead.push_back(*chosen);
	}
}


