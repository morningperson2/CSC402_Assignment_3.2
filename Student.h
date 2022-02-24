//
// Created by paulh on 2/14/2022.
//

#ifndef ASSIGNMENT_3_STUDENT_H
#define ASSIGNMENT_3_STUDENT_H


#include <string>
#include <vector>
#include "Grade.h"
#include "Logger.h"

class Student {
public:

    // Constructor
    Student(std::string name, std::vector<Grade> grades);

    // Destructor
    ~Student();

    // Copy Constructor
    Student(const Student& rhs);

    // Copy assignment operator
    Student& operator=(const Student& rhs);

    // Will return a value from 0-100
    int calculateFinal();

    // Returns a string representation of the NKU letter grade
    std::string calculateLetterGrade();

    // Returns a string report
    std::string printReport();

    int getId();
    std::string getName();
    std::vector<Grade> getGrades();

    void setName(std::string name);
    void setGrades(std::vector<Grade> grades);
    //static void setLogger(Logger l);
    //static Logger logger;

private:

    int id_;
    std::string name_;
    std::vector<Grade> grades_;

protected:
    static int nextId_;

    //static std::string log;

};


#endif //ASSIGNMENT_3_STUDENT_H
