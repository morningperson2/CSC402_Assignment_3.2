//
// Created by paulh on 2/14/2022.
//

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
    int pointsEarned_;
    int totalPoints_;
    double weight_;
    std::string assignment_;
};


#endif //ASSIGNMENT_3_GRADE_H
