//
// Created by hg on 3/23/23.
//
#include "SimpleFactory/Chart.h"
#include "SimpleFactory/PieChart.h"
int main()
{
    Chart* pChart = Chart::getChar(PIE_CHART);
    pChart->display();

    pChart = Chart::getChar(HISTOGRAM_CHART);
    pChart->display();

    PieChart* pc = new PieChart();
    pc->getChar(PIE_CHART);
    return 0;
}