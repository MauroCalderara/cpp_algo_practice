#include <catch2/catch_test_macros.hpp>
#ifndef DEBUG
#include <catch2/benchmark/catch_benchmark.hpp>
#endif

#include <common/one.h>

// Normally your code would go here but we just included our hello_world dummy
// library for this template.

TEST_CASE("common::one()") {

  REQUIRE(common::one() == 1);

#ifndef DEBUG
  BENCHMARK("\"Function's\" speed") {
    return common::one();
  };
#endif

}

