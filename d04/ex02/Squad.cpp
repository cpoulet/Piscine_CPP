#include "Squad.hpp"

Squad::Squad() : ISquad() {
    this->_count = 0;
    this->_squad = NULL;
}

Squad::Squad(Squad const & src) : ISquad() {
	*this = src;
}

Squad::~Squad() {
    delete [] this->_squad;
}

Squad &	Squad::operator=(Squad const & src) {
    this->_count = src.getCount();
    for (int i = 0; i < this->_count; ++i)
        this->push(new ISpaceMarine);
	return *this;
}

ISpaceMarine*   Squad::getUnit(int n) const {
    if (n < 0 or n > (this->_count - 1))
        return NULL;
    return this->_squad[n];
}

int 	        Squad::getCount() const {
    return this->_count;
}

int 	        Squad::push(ISpaceMarine* m) {
    if (m == NULL) //TODO or already inside
        return this->_count;
    return ++this->_count;
}
