// Copyright 2015 ChaiShushan <chaishushan{AT}gmail.com>. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

#ifndef CAPI_EXPORT
#	if defined(__EMSCRIPTEN__)
#		include <emscripten.h>
#		if defined(__cplusplus)
#			define CAPI_EXPORT(rettype) extern "C" rettype EMSCRIPTEN_KEEPALIVE
#		else
#			define CAPI_EXPORT(rettype) rettype EMSCRIPTEN_KEEPALIVE
#		endif
#	else
#		if defined(__cplusplus)
#			define CAPI_EXPORT(rettype) extern "C" rettype
#		else
#			define CAPI_EXPORT(rettype) rettype
#		endif
#	endif
#endif

extern int src, debug;
extern int main(int argc, char **argv);

CAPI_EXPORT(int) c4Run(char* filename, int printSource, int isDebugMode) {
	int argc = 1;
	char *argv[] = { "c4", "", "", "" };

	src = 0;
	debug = 0;

	if(printSource) {
		argv[argc++] = "-s";
	}
	if(isDebugMode) {
		argv[argc++] = "-d";
	}

	if(filename != 0) {
		argv[argc++] = filename;
	}

	return main(argc, argv);
}
