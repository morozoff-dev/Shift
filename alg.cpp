//
// Created by Кирилл on 29.04.2022.
//

#include "alg.h"
#include <unordered_set>

std::vector<Node> vForOne;
std::vector<Node> vForOne2;
std::vector<std::string> noShift2;  // вектор предметов, которые запрещаются при проходе myDFS
//std::vector<Node> ySch;  // вектор, показывающий текущее расписание твоей группы
std::vector<Node> fr;  // вектор осободившихся ячеек

std::vector<std::vector<Node>> alg(std::vector<A>& vec, const std::string& yourGr, std::vector<std::string>& noShift) {
    int n = vec.size();
    std::vector<std::vector<Node>> mt(n);
    // Создали матрицу с n строками, где n это кол-во переводов, которые нужно сделать.
    // Каждая строка это путь из ячеек, в которые нужно перевестись

    for(A a : vec) {
        Node u0 = aToNode(a);
        Node uf = getN(yourGr, u0.subj);
        fr.push_back(uf);  // новая освобод-ся ячейка
        myDFS(u0, yourGr, noShift);
        mt.push_back(vForOne);
        if(vForOne.empty())
            fr.pop_back();  // т.е. перевод не удался => ячейка все таки не осв-сь
        vForOne.clear();
    }

    return mt;
}

void myDFS(Node u, const std::string &yourGr, std::vector<std::string> &noShift) {
    vForOne.push_back(u);
    for(Node x : fr) {       // если нужная ячейка была занята, но теперь освободилась
        if(u.day == x.day && u.pairID == x.pairID) {
            vForOne2.
            return;
        }
    }
    if(check(yourGr, u.day, u.pairID).empty())  // если время не занято
        return vForOne;
    else {    // если у моей группы в день u.day и пару u.pairID есть пара,
        // то проверяем, разрешено ли поменять соответствующий этой паре предмет
        std::string subj = check(yourGr, u.day, u.pairID)[0].second;    // здесь получаем какой предмет в эту пару
        int i = 0;
        for(std::string x : noShift) {
            if(subj == x) {
                vForOne.pop_back();
                break;
            }
            ++i;
        }
        int j = 0;
        for(std::string x : noShift2) {
            if(subj == x) {
                vForOne.pop_back();
                break;
            }
            ++j;
        }
       if((i == noShift.size()) && (j == noShift2.size())) {  // т.е. если subj не совпал ни с кем из noShift и ни с кем
           // из noShift2 (значит разрешено)
           noShift2.push_back(u.subj);

           std::vector<Node> currSubj = nSubj(yourGr, subj);
           for(Node x : currSubj) {
               std::vector<Node> temp = myDFS(x, yourGr, noShift, Node());
               if(temp.empty() == 0)
                   return;
           }

       }
    }
}
