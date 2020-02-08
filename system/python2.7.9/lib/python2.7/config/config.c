/* Generated automatically from ./Modules/config.c.in by makesetup. */
/* -*- C -*- ***********************************************
Copyright (c) 2000, BeOpen.com.
Copyright (c) 1995-2000, Corporation for National Research Initiatives.
Copyright (c) 1990-1995, Stichting Mathematisch Centrum.
All rights reserved.

See the file "Misc/COPYRIGHT" for information on usage and
redistribution of this file, and for a DISCLAIMER OF ALL WARRANTIES.
******************************************************************/

/* Module configuration */

/* !!! !!! !!! This file is edited by the makesetup script !!! !!! !!! */

/* This file contains the table of built-in modules.
   See init_builtin() in import.c. */

#include "Python.h"

#ifdef __cplusplus
extern "C" {
#endif


extern void initthread(void);
extern void initsignal(void);
extern void initposix(void);
extern void initerrno(void);
extern void initpwd(void);
extern void init_sre(void);
extern void init_codecs(void);
extern void init_weakref(void);
extern void initzipimport(void);
extern void init_symtable(void);
extern void initreadline(void);
extern void initarray(void);
extern void initcmath(void);
extern void initmath(void);
extern void init_struct(void);
extern void inittime(void);
extern void initoperator(void);
extern void init_random(void);
extern void init_collections(void);
extern void init_heapq(void);
extern void inititertools(void);
extern void initstrop(void);
extern void init_functools(void);
extern void init_elementtree(void);
extern void initdatetime(void);
extern void init_bisect(void);
extern void initunicodedata(void);
extern void init_locale(void);
extern void init_io(void);
extern void initfcntl(void);
extern void initspwd(void);
extern void initgrp(void);
extern void initselect(void);
extern void initmmap(void);
extern void init_csv(void);
extern void init_socket(void);
extern void initcrypt(void);
extern void initnis(void);
extern void inittermios(void);
extern void initresource(void);
extern void initaudioop(void);
extern void initimageop(void);
extern void initlinuxaudiodev(void);
extern void init_tkinter(void);
extern void initsyslog(void);
extern void initdl(void);
extern void initgdbm(void);
extern void initbinascii(void);
extern void initparser(void);
extern void initcStringIO(void);
extern void initcPickle(void);
extern void initzlib(void);
extern void initpyexpat(void);
extern void init_multibytecodec(void);
extern void init_codecs_cn(void);
extern void init_codecs_hk(void);
extern void init_codecs_iso2022(void);
extern void init_codecs_jp(void);
extern void init_codecs_kr(void);
extern void init_codecs_tw(void);
extern void initxxsubtype(void);
extern void init_ctypes(void);
extern void init_ctypes_test(void);
extern void init_multiprocessing(void);
extern void init_sqlite3(void);
extern void init_hotshot(void);
extern void init_json(void);
extern void init_lsprof(void);
extern void initfuture_builtins(void);
extern void initossaudiodev(void);
extern void initbz2(void);
extern void init_hashlib(void);
extern void init_ssl(void);

/* -- ADDMODULE MARKER 1 -- */

extern void PyMarshal_Init(void);
extern void initimp(void);
extern void initgc(void);
extern void init_ast(void);
extern void _PyWarnings_Init(void);

struct _inittab _PyImport_Inittab[] = {

	{"thread", initthread},
	{"signal", initsignal},
	{"posix", initposix},
	{"errno", initerrno},
	{"pwd", initpwd},
	{"_sre", init_sre},
	{"_codecs", init_codecs},
	{"_weakref", init_weakref},
	{"zipimport", initzipimport},
	{"_symtable", init_symtable},
	{"readline", initreadline},
	{"array", initarray},
	{"cmath", initcmath},
	{"math", initmath},
	{"_struct", init_struct},
	{"time", inittime},
	{"operator", initoperator},
	{"_random", init_random},
	{"_collections", init_collections},
	{"_heapq", init_heapq},
	{"itertools", inititertools},
	{"strop", initstrop},
	{"_functools", init_functools},
	{"_elementtree", init_elementtree},
	{"datetime", initdatetime},
	{"_bisect", init_bisect},
	{"unicodedata", initunicodedata},
	{"_locale", init_locale},
	{"_io", init_io},
	{"fcntl", initfcntl},
	{"spwd", initspwd},
	{"grp", initgrp},
	{"select", initselect},
	{"mmap", initmmap},
	{"_csv", init_csv},
	{"_socket", init_socket},
	{"crypt", initcrypt},
	{"nis", initnis},
	{"termios", inittermios},
	{"resource", initresource},
	{"audioop", initaudioop},
	{"imageop", initimageop},
	{"linuxaudiodev", initlinuxaudiodev},
	{"_tkinter", init_tkinter},
	{"syslog", initsyslog},
	{"dl", initdl},
	{"gdbm", initgdbm},
	{"binascii", initbinascii},
	{"parser", initparser},
	{"cStringIO", initcStringIO},
	{"cPickle", initcPickle},
	{"zlib", initzlib},
	{"pyexpat", initpyexpat},
	{"_multibytecodec", init_multibytecodec},
	{"_codecs_cn", init_codecs_cn},
	{"_codecs_hk", init_codecs_hk},
	{"_codecs_iso2022", init_codecs_iso2022},
	{"_codecs_jp", init_codecs_jp},
	{"_codecs_kr", init_codecs_kr},
	{"_codecs_tw", init_codecs_tw},
	{"xxsubtype", initxxsubtype},
	{"_ctypes", init_ctypes},
	{"_ctypes_test", init_ctypes_test},
	{"_multiprocessing", init_multiprocessing},
	{"_sqlite3", init_sqlite3},
	{"_hotshot", init_hotshot},
	{"_json", init_json},
	{"_lsprof", init_lsprof},
	{"future_builtins", initfuture_builtins},
	{"ossaudiodev", initossaudiodev},
	{"bz2", initbz2},
	{"_hashlib", init_hashlib},
	{"_ssl", init_ssl},

/* -- ADDMODULE MARKER 2 -- */

    /* This module lives in marshal.c */
    {"marshal", PyMarshal_Init},

    /* This lives in import.c */
    {"imp", initimp},

    /* This lives in Python/Python-ast.c */
    {"_ast", init_ast},

    /* These entries are here for sys.builtin_module_names */
    {"__main__", NULL},
    {"__builtin__", NULL},
    {"sys", NULL},
    {"exceptions", NULL},

    /* This lives in gcmodule.c */
    {"gc", initgc},

    /* This lives in _warnings.c */
    {"_warnings", _PyWarnings_Init},

    /* Sentinel */
    {0, 0}
};


#ifdef __cplusplus
}
#endif
