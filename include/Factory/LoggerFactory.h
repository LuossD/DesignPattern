//
// Created by hg on 3/23/23.
//

#ifndef DP_LOGGERFACTORY_H
#define DP_LOGGERFACTORY_H
//class Logger;
#include "Logger.h"
class LoggerFactory
{
public:
     virtual Logger* createLogger() = 0;
     void Log()
     {
         this->createLogger()->log();
     }
};

#endif //DP_LOGGERFACTORY_H
