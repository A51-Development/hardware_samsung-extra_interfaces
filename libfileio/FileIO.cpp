#include <android-base/file.h>

#include <LogFormat.h>

namespace FileIO {

using ::android::base::ReadFileToString;
using ::android::base::WriteStringToFile;

std::string readline(const char *path) {
  std::string str;
  ReadFileToString(path, &str);
  return str;
}

int readint(const char *path) {
  const std::string value = readline(path);
  try {
    return stoi(value);
  } catch (std::invalid_argument const &ex) {
    LOG_E("%s: stoi(): invalid argument: for %s", __func__, value.c_str());
  } catch (std::out_of_range const &ex) {
    LOG_E("%s: stoi(): out of range: for %s", __func__, value.c_str());
  }
  return 0;
}

void writeline(const char *path, const std::string& data) {
  WriteStringToFile(data, path);
}

void writeline(const char *path, const int data) {
  writeline(path, std::to_string(data));
}

} // namespace FileIO
