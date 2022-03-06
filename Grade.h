/******************************************************************************/
/*!
\file   Grade.h
\author Paul Huffman
\par    email: huffmanp4\@nku.edu
\par    Course: CSC402
\par    Section: 001
\par    Assignment: 3
\date   3/06/2022
\brief
  This file contains the declaration of the grade class.
  Functions included:
    getEarned()
    getTotal()
    getWeight()
    getAssignment()
    setEarned()
    setTotal()
    setWeight()
    setAssignment()
    setAll()
    score()

  Hours spent on this assignment: 10
  Specific portions that gave you the most trouble: Student
*/
/******************************************************************************/

#ifndef ASSIGNMENT_3_GRADE_H
#define ASSIGNMENT_3_GRADE_H


#include <string>
#include "Logger.h"

class Grade {
public:

    int getEarned() const;
    int getTotal() const;
    double getWeight() const;
    std::string getAssignment();

    void setEarned(int earned);
    void setTotal(int total);
    void setWeight(double weight);
    void setAssignment(std::string assignment);
    void setAll(int earned, int total, double weight, std::string assignment);

    double score() const;

private:
    int pointsEarned_;       //!< The number of points earned on an assignment.
    int totalPoints_;        //!< The total number of point on an assignment.
    double weight_;          //!< The weight for the assignment.
    std::string assignment_; //!< The name of the assignment.
};


#endif //ASSIGNMENT_3_GRADE_H
