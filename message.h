#ifndef MESSAGE_H
#define MESSAGE_H

#include <string>
#include <chrono>

enum class Importance {Low, Medium, High};

class Message
{
public:
    Message(std::string content, Importance importance);

private:
    std::string _text;
    Importance _importance;
    std::chrono::time_point<std::chrono::system_clock> _time;
};

#endif // MESSAGE_H
