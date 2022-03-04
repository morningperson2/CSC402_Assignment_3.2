//
// Created by paulh on 2/14/2022.
//

#include "Student.h"

#include <utility>

int Student::nextId_ = 0;
static Logger &logger = Logger::getInstance();
//static std::string log;

Student::Student() {
  id_ = ++nextId_;

  //log = "Created Student with id of ";
  //log.append(std::to_string(id_));
  //logger.log(log);
}

Student::~Student() {
  //log = "Distructing student with id of ";
  //log.append(std::to_string(id_));
  //logger.log(log);

  id_ = 0;
  name_ = " ";
  grades_.clear();
}

Student::Student(const Student &rhs) {
  //log = "Creating copy of Student with id of ";
  //log.append(std::to_string(rhs.id_));
  //logger.log(log);

  id_ = ++nextId_;
  name_ = rhs.name_;
  grades_ = rhs.grades_;
}

Student &Student::operator=(const Student &rhs) {
  //log = "Copying a Student with id of ";
  //log.append(std::to_string(rhs.id_));
  //log.append(" to a Student with id of ");
  //log.append(std::to_string(id_));
  //logger.log(log);

  if(this != &rhs)
  {
    id_ = ++nextId_;
    name_ = rhs.name_;
    grades_ = rhs.grades_;
  }

  return *this;
}

int Student::calculateFinal(bool print) {
  //log = "Calculating the final grade of a Student with id of ";
  //log.append(std::to_string(id_));
  //logger.log(log);

  double final = 0.0;
  for(auto & grade : grades_)
  {
    final += grade->score() * grade->getWeight();
  }

  // final = final/(double)grades_.size();
  if(print)
    logger.log(std::to_string((int)final));

  return (int)final;
}

std::string Student::calculateLetterGrade(bool print) {
  //log = "Calculating the final letter grade of a Student with if of ";
  //log.append(std::to_string(id_));
  //logger.log(log);

  int final = calculateFinal(false);

  if(final >= 93){
    if(print)
      logger.log("A");
    return "A";
  }
  else if(final >= 90){
    if(print)
      logger.log("A-");
    return "A-";
  }
  else if(final >= 87){
    if(print)
      logger.log("B+");
    return "B+";
  }
  else if(final >= 83){
    if(print)
      logger.log("B");
    return "B";
  }
  else if(final >= 80){
    if(print)
      logger.log("B-");
    return "B-";
  }
  else if(final >= 77){
    if(print)
      logger.log("C+");
    return "C+";
  }
  else if(final >= 73){
    if(print)
      logger.log("C");
    return "C";
  }
  else if(final >= 70){
    if(print)
      logger.log("C-");
    return "C-";
  }
  else if(final >= 67){
    if(print)
      logger.log("D+");
    return "D+";
  }
  else if(final >= 60){
    if(print)
      logger.log("D");
    return "D";
  }
  else{
    if(print)
      logger.log("F");
    return "F";
  }
}

std::string Student::printReport(bool print) {
  std::string report = "REPORT\n";

  for(auto & grade : grades_)
  {
    report.append(grade->getAssignment());
    report.append(": ");
    report.append(std::to_string((int)grade->score()));
    report.append("%\n");
  }

  if(print)
    logger.log(report);
  return report;
}

int Student::getId(bool print) const {
  logger.log(std::to_string(id_));
  return id_;
}

std::string Student::getName(bool print) {
  logger.log(name_);
  return name_;
}

std::vector<Grade*> Student::getGrades() {
  return grades_;
}

void Student::setName(std::string name) {
  name_ = std::move(name);
}

void Student::setGrades(std::vector<Grade*> grades) {
  grades_ = std::move(grades);
}
