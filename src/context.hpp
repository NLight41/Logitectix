// src/context.hpp
#pragma once
#include "stage.hpp"
struct Context {
    Stage stage = Stage::INPUT;
    // 之後再加 data/answer 等
    void dispatch();
};