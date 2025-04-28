#include "demo_sum.hpp"
#include "../src/context.hpp"
#include <numeric>

void demo_sum(Context& ctx) {
	ctx.answer = std::accumulate(ctx.data.begin())
}
