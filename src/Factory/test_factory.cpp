//
// Created by hg on 3/23/23.
//

#include "Factory/FileLogger.h"
#include "Factory/DatabaseLogger.h"
#include "Factory/FileLoggerFactory.h"
#include "Factory/DbLoggerFactory.h"
int main()
{
    LoggerFactory* factory = new FileLoggerFactory();
//    Logger* logger = factory->createLogger();
//    logger->log();
    factory->Log();
    factory = new DbLoggerFactory();
    factory->Log();
    return 0;
}