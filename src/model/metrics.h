#pragma once

#include <memory>

namespace mlp {
struct Metrics {
  double accuracy{0};
  double precision{0};
  double recall{0};
  double f_measure{0};
  double total_time{0};
};
}  // namespace mlp
