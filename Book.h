#pragma once
#include <string>

class Book {
private:
	static int nextID;
	int	ID;
	std::string title;
	std::string author;
	std::string	category;

public:
	Book(std::string title, std::string author, std::string category);

	const std::string getTitle() const;
	const std::string getAuthor() const;
	const std::string getCategory() const;

	int getID() const;

	void setTitle(const std::string newTitle);
	void setAuthor(const std::string newAuthor);
	void setCategory(const std::string newCategory);

	void displayInfo();

	~Book() {};
};