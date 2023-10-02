#pragma once

#include "neural_network.h"

namespace mlp {
class MatrixNetwork : public NeuralNetwork {
 public:
  explicit MatrixNetwork(size_t count_hidden) : NeuralNetwork(count_hidden) {}
  ~MatrixNetwork() = default;

 private:
  Layer* GetInstance(size_t size) override { return new MatrixLayer(size); }
  Layer* GetInstance(size_t size, Layer* prev) override {
    return new MatrixLayer(size, prev);
  }
};
}  // namespace mlp
