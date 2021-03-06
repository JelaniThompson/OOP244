// OOP244 Milestone 5
// File PosIO.h
// Date 2017-04-17
// Author Dominic Nunes
// Student Number 016-183-121
// Email dcnunes@myseneca.ca

#ifndef ICT_POSIO_H__
#define ICT_POSIO_H__

#include <fstream>
#include <iostream>

// abstract class for IO functions
using namespace std;
namespace ict {

class PosIO {
public:
    virtual fstream& save(fstream& file) const = 0;
    virtual fstream& load(fstream& file) = 0;
    virtual ostream& write(ostream& os, bool linear) const = 0;
    virtual istream& read(istream& is) = 0;
};

}
#endif
