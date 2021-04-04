#ifndef KENDRYTE_DEBUG_MODE_H
#define KENDRYTE_DEBUG_MODE_H

enum debug_mode
{
    SINGLE_HART = 1,
    DOUBLE_HART = 2
};

typedef struct debuginfo
{
	int debug_mode;
	int debug_hartid;
}debug_info_t;


extern debug_info_t debug_info;

void set_debug_info(int mode, int hartid);


#endif // !KENDRYTE_DEBUG_MODE_H
