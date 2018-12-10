// Copyright 2016 ChaiShushan <chaishushan{AT}gmail.com>. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

// O_RDONLY 0x0000
// O_WRONLY 0x0001
// O_RDWR   0x0002
// O_APPEND 0x0008
// O_CREAT  0x0100
// O_TRUNC  0x0200

int writefile(char *name, char* data) {
	int fd;
	char* p;
	int i;

	// 0x0302: O_CREAT|O_TRUNC|O_RDWR
	fd = open("temp.txt", 0x0302);
	if(fd < 0) {
		printf("could not open file\n");
		return -1;
	}

	p = data;
	while(p != 0 && p[0] != 0) {
		if(write(fd, p, 1) != 1) {
			close(fd);
			return -1;
		}
		p++;
	}
	close(fd);
	return 0;
}

int appendfile(char *name, char* data) {
	int fd;
	char* p;
	int i;

	// 0x000A: _O_RDWR|O_APPEND
	fd = open("temp.txt", 0x000A);
	if(fd < 0) {
		printf("could not open file\n");
		return -1;
	}

	p = data;
	while(p != 0 && p[0] != 0) {
		if(write(fd, p, 1) != 1) {
			close(fd);
			return -1;
		}
		p++;
	}

	close(fd);
	return 0;
}

int displayfile(char *name) {
	int fd;
	char *p;
	int i;

	// open for readonly
	fd = open(name, 0);
	if(fd < 0) {
		printf("could not open(%s) file\n", name);
		return -1;
	}

	p = malloc(1024);
	i = read(fd, p, 1024-1);
	close(fd);

	if(i <= 0) {
		free(p);
		printf("read() returned %d\n", i); return -1;
		return -1;
	}
	p[i] = 0;

	printf("%s", p);
	free(p);
	return 0;
}

int main() {
	writefile("temp.txt", "abcd\n");
	appendfile("temp.txt", "1234\n");
	appendfile("temp.txt", "chaishushan{AT}gmail.com\n");
	displayfile("temp.txt");
	return 0;
}
