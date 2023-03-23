//
// Created by hg on 3/23/23.
//

#ifndef DP_FILELOGGER_H
#define DP_FILELOGGER_H

#include "Logger.h"
class FileLogger : public Logger
{
public:
    void log() override;
};


#endif //DP_FILELOGGER_H
