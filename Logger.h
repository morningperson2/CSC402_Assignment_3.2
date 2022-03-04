//
// Created by paulh on 2/14/2022.
//

#ifndef ASSIGNMENT_3_LOGGER_H
#define ASSIGNMENT_3_LOGGER_H


#include <string>

class Logger {
  public:
    void log(const std::string& output);
    static Logger& getInstance();

    ~Logger();

private:
    Logger();
    Logger(Logger const& l);
    Logger& operator=(Logger const& l);
    std::string fullLog;
};


#endif //ASSIGNMENT_3_LOGGER_H
