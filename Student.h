/******************************************************************************/
/*!
\file   Student.h
\author Paul Huffman
\par    email: huffmanp4\@nku.edu
\par    Course: CSC402
\par    Section: 001
\par    Assignment: 3
\date   3/06/2022
\brief
  This file contains the declaration of the student class.
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

#ifndef ASSIGNMENT_3_STUDENT_H
#define ASSIGNMENT_3_STUDENT_H


#include <string>
#include <vector>
#include "Grade.h"
#include "Logger.h"

class Student {
public:

    // Constructor
    Student();

    // Destructor
    ~Student();

    // Copy Constructor
    Student(const Student& rhs);

    // Copy assignment operator
    Student& operator=(const Student& rhs);

    // Will return a value from 0-100
    int calculateFinal(bool print = true);

    // Returns a string representation of the NKU letter grade
    std::string calculateLetterGrade(bool print = true);

    // Returns a string report
    std::string printReport(bool print = true);

    int getId(bool print = true) const;
    std::string getName(bool print = true);
    std::vector<Grade*> getGrades();

    void setName(std::string name);
    void setGrades(std::vector<Grade*> grades);

private:

    int id_;                     //!< The id number of a student. Each is unique.
    std::string name_;           //!< The name of a student.
    std::vector<Grade*> grades_; //!< The grades for the student.

protected:
    static int nextId_;          //!< The next id that will be used.

};


#endif //ASSIGNMENT_3_STUDENT_H
