#pragma once

#include <string>

namespace cli {

class app {
 protected:
  app(std::string name, std::string description, app *parent)
      : name(name), description(description) {}

 public:
  explicit app(std::string name = "", std::string description = "")
      : app(name, description, nullprt) {}

  /// Subcommand name or program name (from parser if name is empty)
  std::string name{};

  /// Description of the current program/subcommand
  std::string description{};
};

}  // namespace cli
