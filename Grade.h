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

    double score() const;

private:
    int pointsEarned_;
    int totalPoints_;
    double weight_;
    std::string assignment_;

protected:
    static Logger logger;
};


#endif //ASSIGNMENT_3_GRADE_H
