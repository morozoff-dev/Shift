//
// Created by Кирилл on 23.04.2022.
//

#include "teacher.h"

//setters

void Teacher::setName(const string &name) {
    Teacher::name = name;
}

void Teacher::setEasiness(float easiness) {
    Teacher::easiness = easiness;
}

void Teacher::setWmLink(const string &wmLink) {
    Teacher::wmLink = wmLink;
}

//getters

const string &Teacher::getName() const {
    return name;
}

float Teacher::getEasiness() const {
    return easiness;
}

const string &Teacher::getWmLink() const {
    return wmLink;
}