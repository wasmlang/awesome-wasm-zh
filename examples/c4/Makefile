# Copyright 2016 ChaiShushan <chaishushan{AT}gmail.com>. All rights reserved.
# Use of this source code is governed by a BSD-style
# license that can be found in the LICENSE file.

c4.js: c4.c c4_api.c pre.js post.js
	emcc c4.c c4_api.c -o c4.js -o2 --pre-js pre.js --post-js post.js --embed-file data

run: c4.js
	node c4.js data/hello.c

ctest:
	gcc -m32 c4.c -o a.out.exe
	a.out.exe c4.c hello.c

clean:
	-rm a.out
	-rm a.out.exe
	-rm a.out.js
