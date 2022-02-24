//
// Created by paulh on 2/14/2022.
//
#include <iostream>
#include "Student.h"
#include "Grade.h"
#include "Logger.h"


int main(){
  Logger &logger = logger.getInstance();
  std::vector<Grade> grades;
  Grade testGrade;
  logger.log("Created a grade named testGrade.");

  testGrade.setAssignment("Homework 1");
  testGrade.setEarned(95);
  testGrade.setTotal(100);
  testGrade.setWeight(.07333);

  logger.log("Added testGrade to the end of grades.");
  grades.push_back(testGrade);

  testGrade.setAssignment("Program 1");
  testGrade.setEarned(100);
  testGrade.setTotal(100);
  testGrade.setWeight(.0907);

  grades.push_back(testGrade);
  logger.log("Added testGrade to the end of grades.");

  testGrade.setAssignment("Homework 2");
  testGrade.setEarned(62);
  testGrade.setTotal(100);
  testGrade.setWeight(.07333);

  grades.push_back(testGrade);
  logger.log("Added testGrade to the end of grades.");

  testGrade.setAssignment("Homework 3");
  testGrade.setEarned(60);
  testGrade.setTotal(75);
  testGrade.setWeight(.07333);

  grades.push_back(testGrade);
  logger.log("Added testGrade to the end of grades.");

  testGrade.setAssignment("Test 1");
  testGrade.setEarned(75);
  testGrade.setTotal(100);
  testGrade.setWeight(.1583);

  grades.push_back(testGrade);
  logger.log("Added testGrade to the end of grades.");

  testGrade.setAssignment("Program 2");
  testGrade.setEarned(100);
  testGrade.setTotal(100);
  testGrade.setWeight(.0907);

  grades.push_back(testGrade);
  logger.log("Added testGrade to the end of grades.");

  testGrade.setAssignment("Homework 4");
  testGrade.setEarned(50);
  testGrade.setTotal(100);
  testGrade.setWeight(.07333);

  grades.push_back(testGrade);
  logger.log("Added testGrade to the end of grades.");

  testGrade.setAssignment("Program 3");
  testGrade.setEarned(75);
  testGrade.setTotal(75);
  testGrade.setWeight(.0907);

  grades.push_back(testGrade);
  logger.log("Added testGrade to the end of grades.");

  testGrade.setAssignment("Homework 6");
  testGrade.setEarned(55);
  testGrade.setTotal(100);
  testGrade.setWeight(.07333);

  grades.push_back(testGrade);
  logger.log("Added testGrade to the end of grades.");

  testGrade.setAssignment("Test 2");
  testGrade.setEarned(67);
  testGrade.setTotal(80);
  testGrade.setWeight(.1583);

  grades.push_back(testGrade);
  logger.log("Added testGrade to the end of grades.");

  Student student1("Paul", grades);

  std::cout << "The id of the student " << student1.getName() << " is " << student1.getId() << std::endl;

  std::cout<<"The final grade for student " << student1.getName() << " is " << student1.calculateFinal() << std::endl;
  std::cout<<"The final letter grade for " << student1.getName() << " is " << student1.calculateLetterGrade() << std::endl;
  std::cout<<"The report for student " << student1.getName() << " is " <<std::endl;
  std::cout<<student1.printReport();

  Student student2 = student1;
  Student student3(student2);
  student2.setName("Joe");
  student3.setName("Sarah");

  std::cout<<"Student "<<student2.getName()<<" was created with operater= of student1."<<std::endl;
  std::cout<<student2.getName()<<"'s id is "<<student2.getId()<<" which is a different id from "<<student1.getName()<<" who has id "<<student1.getId()<<std::endl;
  std::cout<<"Student "<<student3.getName()<<" was created with the copy constructor of student2"<<std::endl;
  std::cout<<student3.getName()<<"'s id is "<<student3.getId()<<" which is a different id from "<<student2.getName()<<" who has id "<<student2.getId()<<std::endl;



  return 0;



}

