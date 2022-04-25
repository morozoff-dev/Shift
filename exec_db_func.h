//
// Created by Кирилл on 22.04.2022.
//

#ifndef GREAT_PROJECT_EXEC_DB_FUNC_H
#define GREAT_PROJECT_EXEC_DB_FUNC_H


#include <cstdio>
#include <string>
#include <cstring>
#include <vector>

//void my_exec(char * sql);
void my_exec(const char * sql, std::vector<std::pair<std::string, std::string>>& vec);

#endif //GREAT_PROJECT_EXEC_DB_FUNC_H