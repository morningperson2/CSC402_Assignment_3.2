/******************************************************************************/
/*!
\file   Student.cpp
\author Paul Huffman
\par    email: huffmanp4\@nku.edu
\par    Course: CSC402
\par    Section: 001
\par    Assignment: 3
\date   3/06/2022
\brief
  This file contains the implementation of the student class.
  Functions included:
    Student()
    ~Student
    Student()
    operator=()
    calculateFinal()
    calculateLetterGrade()
    printReport()
    gitId()
    getName()
    getGrades()
    setName()
    setGrades()

  Hours spent on this assignment: 10
  Specific portions that gave you the most trouble: Student
*/
/******************************************************************************/

#include "Student.h"

#include <utility>

int Student::nextId_ = 0;
static Logger &logger = Logger::getInstance();
//static std::string log;

/****************************************************************************/
/*!
  \brief
    This is the default constructor for the student class.
*/
/****************************************************************************/
Student::Student() {
  id_ = ++nextId_;

  //log = "Created Student with id of ";
  //log.append(std::to_string(id_));
  //logger.log(log);
}

/****************************************************************************/
/*!
  \brief
    This is the destructor for the student class.
*/
/****************************************************************************/
Student::~Student() {
  //log = "Distructing student with id of ";
  //log.append(std::to_string(id_));
  //logger.log(log);

  id_ = 0;
  name_ = " ";
  grades_.clear();
}

/****************************************************************************/
/*!
  \brief
    This is the copy constructor for the student class.

  \param rhs
    This is the student that will be copied.
*/
/****************************************************************************/
Student::Student(const Student &rhs) {
  //log = "Creating copy of Student with id of ";
  //log.append(std::to_string(rhs.id_));
  //logger.log(log);

  id_ = ++nextId_;
  name_ = rhs.name_;
  grades_ = rhs.grades_;
}

/****************************************************************************/
/*!
  \brief
    This is the assignment operator.

  \param rhs
    This is the student that will be assigned to another.

  \return
    This function will return a reference to a student.
*/
/****************************************************************************/
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

/****************************************************************************/
/*!
  \brief
    This function will calculate the final grade for a student.

  \param print
     This is used to tell the function whether it will print or not. It is
     set by default to true.

  \return
    This function will return an int that is the calculated final grade for
    the student.
*/
/****************************************************************************/
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

/****************************************************************************/
/*!
  \brief
    This function will calculate the final letter grade for a student.

  \param print
     This is used to tell the function whether it will print or not. It is
     set by default to true.

  \return
    This function will return a string that is the calculated final letter
    grade for the student.
*/
/****************************************************************************/
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

/****************************************************************************/
/*!
  \brief
    This function will print the grade report for the student.

  \param print
     This is used to tell the function whether it will print or not. It is
     set by default to true.

  \return
    This function will return a string that contains the grade report for the
    student.
*/
/****************************************************************************/
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

/****************************************************************************/
/*!
  \brief
    This function will return the id of the student.

  \param print
     This is used to tell the function whether it will print or not. It is
     set by default to true.

  \return
    This function will return an int that is the id of the student.
*/
/****************************************************************************/
int Student::getId(bool print) const {
  logger.log(std::to_string(id_));
  return id_;
}

/****************************************************************************/
/*!
  \brief
    This function will return the name of the student.

  \param print
     This is used to tell the function whether it will print or not. It is
     set by default to true.

  \return
    This function will return a string containing the name of the student.
*/
/****************************************************************************/
std::string Student::getName(bool print) {
  logger.log(name_);
  return name_;
}

/****************************************************************************/
/*!
  \brief
    This function return a vector containing pointers to the grades of the
    student.

  \return
    This function return a vector containing pointers to the grades of the
    student.
*/
/****************************************************************************/
std::vector<Grade*> Student::getGrades() {
  return grades_;
}

/****************************************************************************/
/*!
  \brief
    This function will set the name of the student.

  \param name
     This is a string that contains the name that will be set for the student.
*/
/****************************************************************************/
void Student::setName(std::string name) {
  name_ = std::move(name);
}

/****************************************************************************/
/*!
  \brief
    This function will set the grades for the student.

  \param grades
     This is a vector containing pointers to grades. It contains the grades
     for the student.
*/
/****************************************************************************/
void Student::setGrades(std::vector<Grade*> grades) {
  grades_ = std::move(grades);
}
