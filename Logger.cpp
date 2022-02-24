//
// Created by paulh on 2/14/2022.
//

#include <iostream>
#include "Logger.h"

void Logger::log(std::string output) {
  time_t currentTime;
  time(&currentTime);

  logFile<<currentTime<<": "<<output<<std::endl;
}

Logger &Logger::getInstance() {
  static Logger instance;
  return instance;
}

Logger::Logger() {
  logFile.open("LogFile.txt");

  if(!logFile.is_open())
  {
    std::cout<<"LogFile couldn't be opened."<<std::endl;
  }
}

Logger::~Logger() {
  if(logFile)
  {
    logFile.close();
  }
}
