#include "message.h"

Message::Message(std::string content, Importance importance)
    : _text(content), _importance(importance), _time(std::time(0))
{}

Importance Message::getImportance() const
{
    return _importance;
}

std::string Message::getContent() const
{
    return _text;
}

time_t Message::getTime() const
{
    return _time;
}

std::string Message::getImportanceString() const
{
    switch (_importance){
    case Importance::Low:
        return "low";
        break;
    case Importance::Medium:
        return "medium";
        break;
    case Importance::High:
        return "high";
        break;
    }
}
