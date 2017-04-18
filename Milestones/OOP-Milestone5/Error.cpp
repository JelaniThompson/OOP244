// OOP244 Milestone 5
// File Error.cpp
// Date 2017-04-17
// Author Dominic Nunes
// Student Number 016-183-121
// Email dcnunes@myseneca.ca

#include "Error.h"
using namespace std;
namespace ict {

// constructor
Error::Error()
{
    m_message = nullptr;
}

// 1 arg constructor
Error::Error(const char* errorMessage)
{
    m_message = nullptr;
    message(errorMessage);

}

// destructors
Error::~Error()
{
    delete[] m_message;
}

// = operator
void Error::operator=(const char* errorMessage)
{
    message(errorMessage);
}

// clear m_message
void Error::clear()
{
    delete[] m_message;
    m_message = nullptr;
}

// check if m_message is clear
bool Error::isClear() const
{
    return m_message==nullptr;
}

// set m_message
void Error::message(const char* m)
{
    clear();
    int length = (int) strlen(m);
    m_message = new char[length+1];
    strcpy(m_message, m);
}

// casting overloads
Error::operator bool() const
{
    return isClear();
}
Error::operator const char*() const
{
    return m_message;
}

// << operator overload
ostream& operator<<(ostream& os, Error& errorMessage)
{
    if (!errorMessage.isClear()) {
        os << (const char*) errorMessage;
    }
    return os;
}
}