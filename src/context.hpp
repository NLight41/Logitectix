// src/context.hpp
#pragma once
#include "stage.hpp"
struct Context {
    Stage stage = Stage::INPUT;
    // ���Ȧ����A
    void dispatch();
};