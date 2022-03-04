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

    int id_;
    std::string name_;
    std::vector<Grade*> grades_;

protected:
    static int nextId_;

};


#endif //ASSIGNMENT_3_STUDENT_H
