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
  This file contains the implementation of the logger class.
  Functions included:
    log()
    getInstance()
    Logger()
    ~Logger()

  Hours spent on this assignment: 10
  Specific portions that gave you the most trouble: Student
*/
/******************************************************************************/

#include <iostream>
#include "Logger.h"

/****************************************************************************/
/*!
  \brief
    This function will append the output parameter to the end of the logger.

  \param output
    This is a string that will be printed by the logger class.
*/
/****************************************************************************/
void Logger::log(const std::string& output) {

  fullLog.append(output);
  //std::cout<<output;
}

/****************************************************************************/
/*!
  \brief
    This function will return a reference to a logger.

  \return
    This is the reference to a logger that will be returned.
*/
/****************************************************************************/
Logger &Logger::getInstance() {
  static Logger instance;
  return instance;
}

/****************************************************************************/
/*!
  \brief
    This is the default constructor fot the logger class. It is private.
*/
/****************************************************************************/
Logger::Logger() {
  /*logFile.open("LogFile.txt");

  if(!logFile.is_open())
  {
    std::cout<<"LogFile couldn't be opened."<<std::endl;
  }
   */
  fullLog = "";
}

/****************************************************************************/
/*!
  \brief
    This is the destructor for the logger class. It will print the log to
    the screen.
*/
/****************************************************************************/
Logger::~Logger() {
  /*if(logFile)
  {
    logFile.close();
  }*/
  std::cout<<fullLog<<std::endl;
}
