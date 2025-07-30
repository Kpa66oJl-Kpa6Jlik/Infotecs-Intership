#ifndef MESSAGELIBRARY_H
#define MESSAGELIBRARY_H

#include <fstream>
#include "message.h"

class MessageLibrary
{
public:
    MessageLibrary(std::string fileName, Importance importanceByDefault);

    void setDefaultImportance(Importance newDefaultImportance); // Изменить уровень важности сообщения по умолчанию
    void addLogEntry(const Message &msg); // Записать новое сообщение в журнал

private:
    std::ofstream _logFile;
    Importance _importanceByDefault;
};

#endif // MESSAGELIBRARY_H
