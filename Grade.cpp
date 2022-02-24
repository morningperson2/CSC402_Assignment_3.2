//
// Created by paulh on 2/14/2022.
//

#include "Grade.h"

int Grade::getEarned() const {
  return pointsEarned_;
}

int Grade::getTotal() const {
  return totalPoints_;
}

double Grade::getWeight() const {
  return weight_;
}

std::string Grade::getAssignment() {
  return assignment_;
}

void Grade::setEarned(int earned) {
  pointsEarned_ = earned;
}

void Grade::setTotal(int total) {
  totalPoints_ = total;
}

void Grade::setWeight(double weight) {
  weight_ = weight;
}

void Grade::setAssignment(std::string assignment) {
  assignment_ = assignment;
}

double Grade::score() const{
  return (((double)pointsEarned_/totalPoints_)*100);
}
