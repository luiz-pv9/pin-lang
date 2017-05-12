#include "io/log.h"

pin::Log pin::log = pin::Log(LogStdout);

pin::Log::Log(LogOutput output) : output(output) {}

pin::LogPrinterStdout pin::Log::info() { return LogPrinterStdout("[INFO] "); }
