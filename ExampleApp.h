#pragma once

#include "MatrixOS.h"
#include "Application.h"

class ExampleApp : public Application {
 public:
  inline static Application_Info info = {
      .name = "ExampleApp",
      .author = "203 Systems",
      .color = Color(0xFFFFFF),
      .version = 1,
      .visibility = true,
  };

  void Setup() override;
  void Loop() override;
  void End() override;
};
