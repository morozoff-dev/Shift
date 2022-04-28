#include "dbFuncs.h"
#include "alg_funcs.h"
#include <iostream>

int main() {
    std::vector<std::pair<std::string, std::string>> vec = idSubj("B05-001", "TFS");
    for (auto x : vec) {
        std::cout << x.second << std::endl;
    }

    return 0;
}