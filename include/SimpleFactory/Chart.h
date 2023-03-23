//
// Created by hg on 3/23/23.
//

#ifndef DP_CHART_H
#define DP_CHART_H

enum ChartType
{
    PIE_CHART,
    LINE_CHART,
    HISTOGRAM_CHART
};

class Chart
{
public:
    virtual void display() = 0;
    static Chart* getChar(ChartType type);
};


#endif //DP_CHART_H
