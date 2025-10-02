#include "Library.h"
#include <iostream>

void Library::add(const Book& book) {
	collection.push_back(book);
}

void Library::remove(int ID) {
	for (auto i = collection.begin(); i != collection.end(); i++) {
		if (i->getID() == ID) { 
			i = collection.erase(i); 
		} else {
			i++;
		}
	}
}

Book* Library::findByTitle(const std::string& title) {
	for (auto& position : collection) {
		if (position.getTitle() == title) { 
			return &position; 
		} else {
			return nullptr;
		}
	}
}

void Library::displayCollection() {
	for (auto& position : collection) {
		position.displayInfo();
	}
}