#include <catch2/catch_test_macros.hpp>
#ifndef DEBUG
#include <catch2/benchmark/catch_benchmark.hpp>
#endif

#include <common/one.h>

TEST_CASE("common::one()") {

  REQUIRE(common::one() == 1);

#ifndef DEBUG
  BENCHMARK("\"Function's\" speed") {
    return common::one();
  };
#endif

}

