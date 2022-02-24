//
// Created by paulh on 2/14/2022.
//

#ifndef ASSIGNMENT_3_LOGGER_H
#define ASSIGNMENT_3_LOGGER_H


#include <string>
#include <fstream>

class Logger {
  public:
    void log(std::string output);
    static Logger& getInstance();

    ~Logger();

private:
    Logger();
    Logger(Logger const& l);
    Logger& operator=(Logger const& l);
    std::ofstream logFile;
};


#endif //ASSIGNMENT_3_LOGGER_H
