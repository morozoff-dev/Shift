//
// Created by Кирилл on 24.04.2022.
//

#ifndef GREAT_PROJECT_ALG_FUNCS_H
#define GREAT_PROJECT_ALG_FUNCS_H

#include <string>
#include <vector>

// возвращает предмет и препа, которые идут по расписанию в день day, пару p у группы gr
std::vector<std::pair<std::string, std::string>> check(const std::string& gr, const std::string& day, const std::string& p);

#endif //GREAT_PROJECT_ALG_FUNCS_H