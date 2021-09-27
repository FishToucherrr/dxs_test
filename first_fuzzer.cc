#include"libtest.h"

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
    testlibfunc(data, size);
    return 0;
}