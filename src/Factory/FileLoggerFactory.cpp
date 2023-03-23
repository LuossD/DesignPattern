//
// Created by hg on 3/23/23.
//

#include "Factory/FileLoggerFactory.h"

Logger *FileLoggerFactory::createLogger() {
    return new FileLogger();
}
