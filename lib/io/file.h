#ifndef _FILESYSTEM_FILE_H_
#define _FILESYSTEM_FILE_H_

#include <exception>
#include <fstream>
#include <iostream>
#include <sstream>
#include <stdexcept>

namespace pin {

/**
 * Exception thrown from the File class in functions that interacts with the
 * file system (and may fail) if the file wasn't found.
 */
class FileNotFoundException : public std::runtime_error {
 public:
  FileNotFoundException(const std::string& filepath)
      : runtime_error("Could not open file") {}
};

/**
 * The File class contains functions to manipulate files.
 */
class File {
 public:
  /**
   * Reads the given file from the filesystem and returns its contents. The
   * file path can be either absolute or relative to the executable that
   * uses this library. If the file is not found or cannot be read from,
   * an exception is thrown.
   *
   * @param path Path of the file to read (absolute or relative).
   * @return Contents of the file.
   */
  static std::string read(const std::string& path);
};
}

#endif
