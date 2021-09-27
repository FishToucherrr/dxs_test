#include "main.h"

extern "C" int LLVMFuzzerTestOneInput(void) {
    main();
    return 0;
}
