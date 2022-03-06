/******************************************************************************/
/*!
\file   main.cpp
\author Paul Huffman
\par    email: huffmanp4\@nku.edu
\par    Course: CSC402
\par    Section: 001
\par    Assignment: 3
\date   3/06/2022
\brief
  This file contains the main function for the student assignment.

  Hours spent on this assignment: 10
  Specific portions that gave you the most trouble: Student
*/
/******************************************************************************/

#include "Student.h"
#include "Grade.h"
#include "Logger.h"

/****************************************************************************/
/*!
  \brief
    This function is the main function. It will test the classes that have
    been made.

  \return
    The function will always return 0.
*/
/****************************************************************************/
int main(){
  Logger &logger = Logger::getInstance();
  std::vector<Grade*> grades;
  Grade *testGrade = nullptr;
  //logger.log("Created a grade named testGrade.");

  testGrade = new Grade();
  testGrade->setAll(95, 100, .07333,  "Homework 1");

  //logger.log("Added testGrade to the end of grades.");
  grades.push_back(testGrade);

  testGrade = new Grade();
  testGrade->setAll(100, 100, .0907,"Program 1");

  grades.push_back(testGrade);
  //logger.log("Added testGrade to the end of grades.");

  testGrade = new Grade();
  testGrade->setAll(62, 100, .07333,"Homework 2");

  grades.push_back(testGrade);
  //logger.log("Added testGrade to the end of grades.");

  testGrade = new Grade();
  testGrade->setAll(60, 75, .07333,"Homework 3");

  grades.push_back(testGrade);
  //logger.log("Added testGrade to the end of grades.");

  testGrade = new Grade();
  testGrade->setAll(75, 100, .1583,"Test 1");

  grades.push_back(testGrade);
  //logger.log("Added testGrade to the end of grades.");

  testGrade = new Grade();
  testGrade->setAll(100, 100, .0907,"Program 2");

  grades.push_back(testGrade);
  //logger.log("Added testGrade to the end of grades.");

  testGrade = new Grade();
  testGrade->setAll(50, 100, .07333,"Homework 4");

  grades.push_back(testGrade);
  //logger.log("Added testGrade to the end of grades.");

  testGrade = new Grade();
  testGrade->setAll(75, 75, .0907, "Program 3");

  grades.push_back(testGrade);
  //logger.log("Added testGrade to the end of grades.");

  testGrade = new Grade();
  testGrade->setAll(55, 100, .07333,"Homework 6");

  grades.push_back(testGrade);
  //logger.log("Added testGrade to the end of grades.");

  testGrade = new Grade();
  testGrade->setAll(67, 80, .1583,"Test 2");

  grades.push_back(testGrade);
  //logger.log("Added testGrade to the end of grades.");

  Student student1;
  student1.setName("Paul");
  student1.setGrades(grades);

  logger.log("The id of the student ");
  student1.getName();
  logger.log(" is ");
  student1.getId();
  logger.log("\n");

  logger.log("The final grade for student ");
  student1.getName();
  logger.log(" is ");
  student1.calculateFinal();
  logger.log("\n");

  logger.log("The final letter grade for ");
  student1.getName();
  logger.log(" is ");
  student1.calculateLetterGrade();
  logger.log("\n");

  logger.log("The report for student ");
  student1.getName();
  logger.log(" is ");
  logger.log("\n");

  student1.printReport();

  Student student2 = student1;
  Student student3(student2);
  student2.setName("Joe");
  student3.setName("Sarah");

  logger.log("Student ");
  student2.getName();
  logger.log(" was created with operater= of student1.\n");

  student2.getName();
  logger.log("'s id is ");
  student2.getId();
  logger.log(" which is a different id from ");
  student1.getName();
  logger.log(" who has id ");
  student1.getId();
  logger.log("\n");

  logger.log("Student ");
  student3.getName();
  logger.log(" was created with the copy constructor of student2\n");

  student3.getName();
  logger.log("'s id is ");
  student3.getId();
  logger.log(" which is a different id from ");
  student2.getName();
  logger.log(" who has id ");
  student2.getId();
  logger.log("\n");

  for(auto & grade : grades){
    if(grade != nullptr){
      delete grade;
      grade = nullptr;
    }
  }
  grades.clear();

  return 0;
}

