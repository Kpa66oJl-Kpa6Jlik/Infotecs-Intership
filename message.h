#ifndef MESSAGE_H
#define MESSAGE_H

#include <string>
#include <ctime>

enum class Importance {Low, Medium, High};

class Message
{
public:
    Message(std::string content, Importance importance);

    Importance getImportance() const;
    std::string getContent() const;
    std::time_t getTime() const;

    std::string getImportanceString() const;

private:
    std::string _text;
    Importance _importance;
    std::time_t _time;
};

#endif // MESSAGE_H
