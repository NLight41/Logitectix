// src/context.hpp
#pragma once
#include "stage.hpp"
struct Context {
    Stage stage = Stage::INPUT;
    // ����A�[ data/answer ��
    void dispatch();
};