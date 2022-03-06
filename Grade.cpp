/******************************************************************************/
/*!
\file   Grade.cpp
\author Paul Huffman
\par    email: huffmanp4\@nku.edu
\par    Course: CSC402
\par    Section: 001
\par    Assignment: 3
\date   3/06/2022
\brief
  This file contains the implementation of the grade class.
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

#include "Grade.h"

#include <utility>

/****************************************************************************/
/*!
  \brief
    This function will return an int that contains the number of points
    earned.

  \return
    This function will return an int that contains the number of points
    earned on an assignment.
*/
/****************************************************************************/
int Grade::getEarned() const {
  return pointsEarned_;
}

/****************************************************************************/
/*!
  \brief
    This function will return an int that contains the number of points
    for an assignemtn.

  \return
    This function will return an int that contains the number of points for
    an assignment.
*/
/****************************************************************************/
int Grade::getTotal() const {
  return totalPoints_;
}

/****************************************************************************/
/*!
  \brief
    This function will return a double that contains the weight of an
    assignment.

  \return
    This function will return a double containing the weight of an assignment.
*/
/****************************************************************************/
double Grade::getWeight() const {
  return weight_;
}

/****************************************************************************/
/*!
  \brief
    This function will return a string containing the name of an assignment.

  \return
    This function will return a string that contains the name of an
    assignment.
*/
/****************************************************************************/
std::string Grade::getAssignment() {
  return assignment_;
}

/****************************************************************************/
/*!
  \brief
    This function will set the number of points earned on an assignment.

  \param earned
    This is an int that contains the number of points earned on an assignment.
*/
/****************************************************************************/
void Grade::setEarned(int earned) {
  pointsEarned_ = earned;
}

/****************************************************************************/
/*!
  \brief
    This function will set the total number of points for an assignment.

  \param total
    This is an int containing the total points for an assignment.
*/
/****************************************************************************/
void Grade::setTotal(int total) {
  totalPoints_ = total;
}

/****************************************************************************/
/*!
  \brief
    This function will set the weight for an assignment.

  \param weight
    This is a double containing the weight of an assignment.
*/
/****************************************************************************/
void Grade::setWeight(double weight) {
  weight_ = weight;
}

/****************************************************************************/
/*!
  \brief
    This function will set the name for an assignment.

  \param assignment
    This is a string containing the name of an assignment.
*/
/****************************************************************************/
void Grade::setAssignment(std::string assignment) {
  assignment_ = std::move(assignment);
}

/****************************************************************************/
/*!
  \brief
    This function will call all other setting functions.

  \param earned
    This is an int that contains the number of points earned on an assignment.

  \param total
    This is an int containing the total points for an assignment.

  \param weight
    This is a double containing the weight of an assignment.

  \param assignment
    This is a string containing the name of an assignment.
*/
/****************************************************************************/
void Grade::setAll(int earned, int total, double weight, std::string assignment) {
  setEarned(earned);
  setTotal(total);
  setWeight(weight);
  setAssignment(std::move(assignment));
}

/****************************************************************************/
/*!
  \brief
    This function will calculate the score for an assignment.

  /return
    This function will contain a double that is the calculated score for an
    assignment.
*/
/****************************************************************************/
double Grade::score() const{
  return (((double)pointsEarned_/totalPoints_)*100);
}
