//
// Created by Кирилл on 23.04.2022.
//

#ifndef GREAT_PROJECT_TEACHER_H
#define GREAT_PROJECT_TEACHER_H

#include <string>
using namespace std;

class Teacher {
public:
    //constructor
    explicit Teacher(string name = " ", float easiness = -1, const string& wmLink = " " ) : name(name), easiness(easiness), wmLink()
    {}

    //setters
    void setName(const string &name);
    void setEasiness(float easiness);
    void setWmLink(const string &wmLink);
    //getters
    const string &getName() const;
    float getEasiness() const;
    const string &getWmLink() const;

private:
    string name;
    float easiness;
    string wmLink;
};

#endif //GREAT_PROJECT_TEACHER_H