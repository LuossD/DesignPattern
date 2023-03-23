//
// Created by hg on 3/23/23.
//

#include "SimpleFactory/Chart.h"
#include "SimpleFactory/PieChart.h"
#include "SimpleFactory/LineChart.h"
#include "SimpleFactory/HistogramChart.h"
Chart *Chart::getChar(ChartType type)
{
    switch(type)
    {
        case PIE_CHART:
            return new PieChart();
        case LINE_CHART:
            return new LineChart();
        case HISTOGRAM_CHART:
            return new HistogramChart();
        default:
            return nullptr;
    }
}
