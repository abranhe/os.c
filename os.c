//
// os.c
// Get to know your operating system
//
// MIT licensed.
// Copyright (c) Abraham Hernandez <abraham@abranhe.com>
//

const char * operating_system()
{
    #ifdef _WIN32
    return "win32";
    #elif _WIN64
    return "win64";
    #elif __unix || __unix__
    return "unix";
    #elif __APPLE__ || __MACH__
    return "macOS";
    #elif __linux__
    return "linux";
    #elif __FreeBSD__
    return "freeBSD";
    #else
    return "other";
    #endif
}
