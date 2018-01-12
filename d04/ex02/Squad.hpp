#ifndef SQUAD_HPP
# define SQUAD_HPP
# include "ISquad.hpp"

class Squad : public ISquad {

    public:

        Squad();
        Squad(Squad const &);
        Squad &	operator=(Squad const &);
        ~Squad();

        int             getCount() const;
        int             push(ISpaceMarine*);
        ISpaceMarine*   getUnit(int) const;

    private:

        int             _count;
        ISpaceMarine*   _squad;
};

#endif
