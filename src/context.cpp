#include "context.hpp"
#include "input.hpp"
#include "solve.hpp"
#include "output.hpp"

void Context::dispatch() {
		switch(stage) {
		case Stage::INPUT:
			map_input(*this);
			break;
		case Stage::SOLVE:
			solve(*this);
			break;
		case Stage::OUTPUT:
			write_output(*this);
			break;
		default:
			break;
	}
}