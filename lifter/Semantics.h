#pragma once
#include "includes.h"

void liftInstruction(
    IRBuilder<>& builder, ZydisDisassembledInstruction& instruction,
    shared_ptr<
        vector<tuple<uintptr_t, BasicBlock*, unordered_map<int, Value*>>>>
        blockAddresses,
    bool& run);