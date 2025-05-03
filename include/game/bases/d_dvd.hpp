#pragma once
#include <types.h>
#include <lib/egg/heap/eggHeap.hpp>

namespace dDvd {

class loader_c {
public:
    virtual ~loader_c();
    virtual void freeHeap();

private:
    u32 mSize;
    u32 mCommand;
    EGG::Heap* mpHeap;
    void* mpBuffer;
};

void create(long, EGG::Heap *, EGG::Heap *);

} // namespace dDvd
