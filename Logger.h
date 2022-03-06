/******************************************************************************/
/*!
\file   Logger.cpp
\author Paul Huffman
\par    email: huffmanp4\@nku.edu
\par    Course: CSC402
\par    Section: 001
\par    Assignment: 3
\date   3/06/2022
\brief
  This file contains the declaration of the logger class.
  Functions included:
    log()
    getInstance()
    Logger()
    ~Logger()

  Hours spent on this assignment: 10
  Specific portions that gave you the most trouble: Student
*/
/******************************************************************************/

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
    std::string fullLog;                //!< This is the full log of the program.
};


#endif //ASSIGNMENT_3_LOGGER_H
