// src/context.hpp
#pragma once
#include "stage.hpp"
struct Context {
    Stage stage = Stage::INPUT;
    // ¥ý¶È¦³ª¬ºA
    void dispatch();
};