#include <iostream>
#include "Book.h"
#include "utilities.h"
#include "Library.h"

int main() {
	Library collection;

	collection.add(Book("Solaris", "stanislaw lem", "science fiction"));
	collection.add(Book("Zbrodnia i kara", "fiodor Dostojewski", "powiesc psychologiczna"));

	collection.displayCollection();
	return 0;
}