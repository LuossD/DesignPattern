//
// Created by hg on 3/23/23.
//

#ifndef DP_FILELOGGERFACTORY_H
#define DP_FILELOGGERFACTORY_H

#include "LoggerFactory.h"
#include "FileLogger.h"
class FileLoggerFactory : public LoggerFactory
{
public:
    Logger* createLogger() override;
};


#endif //DP_FILELOGGERFACTORY_H
