#ifndef _PIN_IO_LOG_H_
#define _PIN_IO_LOG_H_

#include <string>
#include <iostream>

namespace pin {

  /**
   * Logs strings to the configured output, usually a file or stdout.
   */
  class Log {
  public:

    /**
     * Logs with the `info` level to the configured output.
     *
     * @param msg Message to be logged.
     */
    void info(const std::string& msg) const;

    void highlight(const std::string& msg) const;
  };

  /**
   * Global logger that outputs to stdout.
   */
  extern Log log;
}

#endif