//
// Created by hg on 3/23/23.
//

#include "SimpleFactory/PieChart.h"
#include <iostream>
PieChart::PieChart() {
    std::cout << "Create PieChart" << std::endl;
}

void PieChart::display() {
    std::cout << "Show PieChart" << std::endl;
}
