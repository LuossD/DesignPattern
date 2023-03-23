//
// Created by hg on 3/23/23.
//

#include "Factory/DbLoggerFactory.h"

Logger *DbLoggerFactory::createLogger() {
    return new DatabaseLogger();
}
