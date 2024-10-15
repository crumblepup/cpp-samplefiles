#include <iostream>


//Namespaces provide a solution for preventing name conflicts. This can be useful in larger projects
//In C++, each entity needs a unique name. A namespace allows for identically named entities so long they're assigned to different namespaces.

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

//If no namespace is declared, the local version will be used.

int main()
{
    int x = 0;
    std::cout << x << '\n';

    //let's use the namespaces now.
    std::cout << first::x << '\n';

    std::cout << second::x << '\n';

    return 0;
}

