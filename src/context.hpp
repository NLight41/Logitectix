#pragma once
#include "stage.hpp"
struct Context {
    Stage stage = Stage::INPUT;
    void dispatch();
};