//
// Created by hg on 3/23/23.
//

#ifndef DP_DBLOGGERFACTORY_H
#define DP_DBLOGGERFACTORY_H

#include "LoggerFactory.h"
#include "DatabaseLogger.h"
class DbLoggerFactory : public LoggerFactory
{
public:
    Logger* createLogger() override;
};


#endif //DP_DBLOGGERFACTORY_H
