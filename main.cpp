#include "exec_db_func.h"
#include "alg_funcs.h"
#include <iostream>

int main() {
    std::vector<std::pair<std::string, std::string>> vec = check("B05-001", "Monday", "3");
    for (auto x : vec) {
        std::cout << x.first << "-" << x.second << std::endl;
    }
    return 0;
}