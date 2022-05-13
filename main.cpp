#include "dbFuncs.h"
#include "alg_funcs.h"
#include <iostream>
#include <map>
#include <stdlib.h>
#include "mapSch.h"


int main() {
    std::map<std::string, std::vector<Pair>> mp = mapSch("B05-001");
    for(auto x : mp) {
        std::cout << x.first << ": " << std::endl;
        for(auto t : x.second) {
            std::cout << t.pairID << " " <<t.sName << " " << t.tName << " " << t.easy << " " << t.room << " ";
            std::cout << std::endl;
        }
    }
    return 0;
}