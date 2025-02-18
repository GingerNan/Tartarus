#include <iostream>
#include "tartarus/log.h"

int main(int argc, char** argv)
{
    Tartarus::Logger::ptr logger(new Tartarus::Logger);
    logger->addAppender(Tartarus::LogAppender::ptr(new Tartarus::StdoutLogAppender));

    Tartarus::LogEvent::ptr event(new Tartarus::LogEvent(__FILE__, __LINE__, 0, 1, 2, time(0)));

    std::cout << "hello Tartarus log" << std::endl;

    return 0;
}