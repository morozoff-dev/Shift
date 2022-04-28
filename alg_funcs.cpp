//
// Created by Кирилл on 24.04.2022.
//
#include "alg_funcs.h"
#include "dbFuncs.h"
#include <vector>

std::vector<std::pair<std::string, std::string>> check(const std::string& gr, const std::string& day, const std::string& p) {
    std::vector<std::pair<std::string, std::string>> vec;
    std::string str1 = "select subj.NAME as sname, t.NAME as tname from SCHEDULE as sch"
                       " left join TEACHERS as t on sch.TEACHER_ID = t.T_ID"
                       " left join SUBJECT as subj on sch.SUBJECT_ID = subj.SUBJ_ID"
                       " where sch.GR_NAME = '";
    std::string str2 = "' and DAY = '";
    std::string str3 = "' and PAIR_ID = ";
    std::string str = str1 + gr + str2 + day + str3 + p;
    mySelect(str.c_str(), vec);
    return vec;
}

std::vector<std::pair<std::string, std::string>> idSubj(const std::string& gr, const std::string& subj) {
    std::vector<std::pair<std::string, std::string>> vec;
    std::string str1 = "select ID from SCHEDULE as sch"
                       " left join SUBJECT as subj on sch.SUBJECT_ID = subj.SUBJ_ID"
                       " where GR_NAME != '";
    std::string str2 = "' and subj.NAME = '";
    std::string str3 = "'";
    std::string str = str1 + gr + str2 + subj + str3;
    mySelect(str.c_str(), vec);
    return vec;
}