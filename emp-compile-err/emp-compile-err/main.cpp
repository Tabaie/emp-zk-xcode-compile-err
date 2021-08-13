#include <iostream>
#include <emp-tool/emp-tool.h>
#include <emp-zk/emp-zk.h>

int main(int argc, const char * argv[]) {
    setup_zk_bool((BoolIO<NetIO>**)nullptr, 0, 0);
    return 0;
}
