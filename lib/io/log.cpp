#include "io/log.h"

pin::Log pin::log;

void pin::Log::info(const std::string& msg) const
{
  std::cout << "[INFO] " << msg << std::endl;
}

void pin::Log::highlight(const std::string& msg) const
{
  std::cout << "\n\n=========\n" 
            << msg
            << "\n=========\n\n\n";
}