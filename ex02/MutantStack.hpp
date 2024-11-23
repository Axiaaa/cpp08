#pragma once

#include <stack>

using std::stack;

template <typename Ttype>
class MutantStack : public stack<Ttype>
{
public:
    MutantStack() {}
    ~MutantStack() {}
    MutantStack(const MutantStack &src) { *this = src; }
    MutantStack &operator=(const MutantStack &rhs)
    {
        if (this == &rhs)
        {
            return *this;
        }
        this->c = rhs.c;
        return *this;
    }

    typedef typename stack<Ttype>::container_type::iterator							iterator;
    typedef typename stack<Ttype>::container_type::const_iterator					const_iterator;
    typedef typename stack<Ttype>::container_type::reverse_iterator					reverse_iterator;
    typedef typename stack<Ttype>::container_type::const_reverse_iterator			const_reverse_iterator;

    typename stack<Ttype>::container_type::iterator begin()					{ return this->c.begin();       }
    typename stack<Ttype>::container_type::iterator end()					{ return this->c.end();         }

    typename stack<Ttype>::container_type::const_iterator begin()           const { return this->c.begin(); }
    typename stack<Ttype>::container_type::const_iterator end()             const { return this->c.end();   }

    typename stack<Ttype>::container_type::reverse_iterator rbegin()		{ return this->c.rbegin();     }
    typename stack<Ttype>::container_type::reverse_iterator rend()			{ return this->c.rend();       }

    typename stack<Ttype>::container_type::const_reverse_iterator rbegin() const { return this->c.rbegin(); }
    typename stack<Ttype>::container_type::const_reverse_iterator rend()   const { return this->c.rend();   }
};