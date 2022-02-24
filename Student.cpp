//
// Created by paulh on 2/14/2022.
//

#include "Student.h"

int Student::nextId_ = 0;
static Logger &logger = Logger::getInstance();
static std::string log;

Student::Student(std::string name, std::vector<Grade> grades) {
  id_ = ++nextId_;
  name_ = name;
  grades_ = grades;

  log = "Created Student with id of ";
  log.append(std::to_string(id_));
  logger.log(log);
}

Student::~Student() {
  log = "Distructing student with id of ";
  log.append(std::to_string(id_));
  logger.log(log);

  id_ = 0;
  name_ = " ";
  grades_.clear();
}

Student::Student(const Student &rhs) {
  log = "Creating copy of Student with id of ";
  log.append(std::to_string(rhs.id_));
  logger.log(log);

  id_ = ++nextId_;
  name_ = rhs.name_;
  grades_ = rhs.grades_;
}

Student &Student::operator=(const Student &rhs) {
  log = "Copying a Student with id of ";
  log.append(std::to_string(rhs.id_));
  log.append(" to a Student with id of ");
  log.append(std::to_string(id_));
  logger.log(log);

  if(this != &rhs)
  {
    id_ = ++nextId_;
    name_ = rhs.name_;
    grades_ = rhs.grades_;
  }

  return *this;
}

int Student::calculateFinal() {
  log = "Calculating the final grade of a Student with id of ";
  log.append(std::to_string(id_));
  logger.log(log);

  double final = 0.0;
  for(int i = 0; i < grades_.size(); i++)
  {
    final += grades_[i].score() * grades_[i].getWeight();
  }

 // final = final/(double)grades_.size();

  return (int)final;
}

std::string Student::calculateLetterGrade() {
  log = "Calculating the final letter grade of a Student with if of ";
  log.append(std::to_string(id_));
  logger.log(log);

  int final = calculateFinal();

  if(final >= 93)
    return "A";
  else if(final >= 90)
    return "A-";
  else if(final >= 87)
    return "B+";
  else if(final >= 83)
    return "B";
  else if(final >= 80)
    return "B-";
  else if(final >= 77)
    return "C+";
  else if(final >= 73)
    return "C";
  else if(final >= 70)
    return "C-";
  else if(final >= 67)
    return "D+";
  else if(final >= 60)
    return "D";
  else
    return "F";
}

std::string Student::printReport() {
  std::string report = "REPORT\n";

  for(int i = 0; i < grades_.size(); i++)
  {
    report.append(grades_[i].getAssignment());
    report.append(": ");
    report.append(std::to_string((int)grades_[i].score()));
    report.append("%\n");
  }

  return report;
}

int Student::getId() {
  return id_;
}

std::string Student::getName() {
  return name_;
}

std::vector<Grade> Student::getGrades() {
  return grades_;
}

void Student::setName(std::string name) {
  name_ = name;
}

void Student::setGrades(std::vector<Grade> grades) {
  grades_ = grades;
}

/*void Student::setLogger(Logger &l) {

}*/
