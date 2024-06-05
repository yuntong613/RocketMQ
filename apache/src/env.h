#pragma once

#ifdef WIN32
    int setenv( const char* name, const char* value, int overwrite );
#endif