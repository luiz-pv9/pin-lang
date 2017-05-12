#ifndef _PIN_IO_LOG_H_
#define _PIN_IO_LOG_H_

#include <iostream>
#include <string>

namespace pin {

enum LogOutput { LogStdout };

class LogPrinterStdout {
 public:
  LogPrinterStdout(const std::string& prefix) { std::cout << prefix; }
  virtual ~LogPrinterStdout() { std::cout << std::endl; }

  template <typename T>
  LogPrinterStdout& operator<<(const T& value) {
    std::cout << value;
    return *this;
  }
};

/**
 * Logs strings to the configured output, usually a file or stdout.
 */
class Log {
 public:
  Log(LogOutput output);

  /**
   * Logs with the `info` level to the configured output.
   *
   * @param msg Message to be logged.
   */
  LogPrinterStdout info();

 private:
  LogOutput output;
};

/**
 * Global logger that outputs to stdout.
 */
extern Log log;
}

#endif
