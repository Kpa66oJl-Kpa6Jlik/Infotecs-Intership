#include "messagelibrary.h"

MessageLibrary::MessageLibrary(std::string fileName, Importance importanceByDefault)
    : _logFile(fileName), _importanceByDefault(importanceByDefault) {}

void MessageLibrary::setDefaultImportance(Importance newDefaultImportance)
{
    _importanceByDefault = newDefaultImportance;
}

void MessageLibrary::addLogEntry(const Message &msg)
{
    _logFile << msg.getContent() << msg.getImportanceString() << msg.getTime();
}

