#ifndef COLLECTOR_H
#define COLLECTOR_H

#include <map>
#include <iostream>
#include <ncurses.h>
#include "memory_info.h"
// #define _LOG_TO_NCURSES


namespace GC {


class Memory {
    std::map<int, MemoryInfo> num_of_links;

    Memory();
    int init_new_link(MemoryInfo info);
    void delete_object(int id);
    static Memory memory_manager;

  public:
    ~Memory();
    static MemoryInfo get_new(int size);
    static void add_link(int id);
    static void delete_link(int id);
    static void log(const char *string);
};


} // GC namespace
#endif // COLLECTOR_H
