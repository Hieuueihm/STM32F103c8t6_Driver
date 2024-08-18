#include <iostream>
#include <fstream>

int main()
{
    std::ofstream outfile("generated_macros.h");

    if (!outfile.is_open())
    {
        std::cerr << "Failed to open the file for writing.\n";
        return 1;
    }

    for (int i = 4; i <= 32; ++i)
    {
        outfile << "#define IS_CONDITION_" << i << "(HOST, PARAM, ...) (HOST == PARAM) | IS_CONDITION_" << (i - 1) << "(HOST, __VA_ARGS__)\n";
    }

    outfile.close();

    std::cout << "File 'generated_macros.h' has been generated.\n";
    return 0;
}
