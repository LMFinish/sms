#include "ansi_files.h"
#include "file_io.h"

extern files __files = {
	{
	    0,
	    0,
	    1,
	    0,
	    2,
	    0,
	    0,
	    0,
	    0,
	    0,
	    0,
	    0,
	    0,
	    { 0, 0 },
	    { 0, 0 },
	    0,
	    (unsigned char*)&__files._stdin.char_buffer,
	    1,
	    (unsigned char*)&__files._stdin.char_buffer,
	    0,
	    0,
	    0,
	    0,
	    NULL,
	    __read_console,
	    __write_console,
	    __close_console,
	    NULL,
	},
	{
	    0,
	    0,
	    2,
	    0,
	    2,
	    0,
	    0,
	    0,
	    0,
	    0,
	    0,
	    0,
	    0,
	    { 0, 0 },
	    { 0, 0 },
	    0,
	    (unsigned char*)&__files._stdout.char_buffer,
	    1,
	    (unsigned char*)&__files._stdout.char_buffer,
	    0,
	    0,
	    0,
	    0,
	    NULL,
	    __read_console,
	    __write_console,
	    __close_console,
	    NULL,
	},
	{
	    0,
	    0,
	    2,
	    0,
	    2,
	    0,
	    0,
	    0,
	    0,
	    0,
	    0,
	    0,
	    0,
	    { 0, 0 },
	    { 0, 0 },
	    0,
	    (unsigned char*)&__files._stderr.char_buffer,
	    1,
	    (unsigned char*)&__files._stderr.char_buffer,
	    0,
	    0,
	    0,
	    0,
	    NULL,
	    __read_console,
	    __write_console,
	    __close_console,
	    NULL,
	},
};
