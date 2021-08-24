#include "baz.h"
void foo() { std::cout << "Hello from foo()\n"; }
int main()
{
    foo();
    std::unique_ptr<C> ptr = std::make_unique<D>();
    ptr->info();
    auto pD = std::make_unique<D>();
    pD->info();
}

