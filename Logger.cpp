//
// Created by paulh on 2/14/2022.
//

#include <iostream>
#include "Logger.h"

void Logger::log(const std::string& output) {

  fullLog.append(output);
  //std::cout<<output;
}

Logger &Logger::getInstance() {
  static Logger instance;
  return instance;
}

Logger::Logger() {
  /*logFile.open("LogFile.txt");

  if(!logFile.is_open())
  {
    std::cout<<"LogFile couldn't be opened."<<std::endl;
  }
   */
  fullLog = "";
}


Logger::~Logger() {
  /*if(logFile)
  {
    logFile.close();
  }*/
  std::cout<<fullLog<<std::endl;
}
