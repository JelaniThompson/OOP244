// OOP244 Workshop 2
// File kingdom.h
// Date 2017-01-23
// Author Dominic Nunes
// Student Number 016-183-121
// Email dcnunes@myseneca.ca
//

// TODO: header safeguards
#ifndef KINGDOM_H
#define KINGDOM_H

// TODO: westeros namespace
namespace westeros {

// TODO: define the class Kingdom in the westeros namespace
class Kingdom {
   public:
    char m_name[32];
    int m_population;
};

// TODO: add the declaration for the function display(...),
//         also in the westeros namespace
void display
      (Kingdom &);
}

#endif
