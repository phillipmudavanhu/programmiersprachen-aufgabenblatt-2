#define CATCH_CONFIG_RUNNER
#include <catch.hpp>

#include "vec2.hpp"

// Vec2::Vec2(): x(0), y(0)
TEST_CASE("Testing default Constructor","[Constructor]"){
	Vec2 a;
	REQUIRE(a.x == 0.0f);
	REQUIRE(a.y == 0.0f);
}


//Vec2::Vec2(float x, float y): x(x), y(y)
TEST_CASE("Testing User Defined Constructor","[Constructor]"){
	Vec2 a{0.0,0.0};
	REQUIRE(a.x == 0.0f);
	REQUIRE(a.y == 0.0f);

	Vec2 b{5.5,2.2};
	REQUIRE(b.x == 5.5f);
	REQUIRE(b.y == 2.2f);

	Vec2 c{-5.5,-2.2};
	REQUIRE(c.x == -5.5f);
	REQUIRE(c.y == -2.2f);
}


int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
