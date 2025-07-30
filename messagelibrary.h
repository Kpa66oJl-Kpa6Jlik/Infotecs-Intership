#ifndef MESSAGELIBRARY_H
#define MESSAGELIBRARY_H

#include <fstream>
#include "message.h"

class MessageLibrary
{
public:
    MessageLibrary(std::string fileName, Importance importanceByDefault);

private:
    std::ofstream _journalFile;
    Importance _importanceByDefault;
};

#endif // MESSAGELIBRARY_H
