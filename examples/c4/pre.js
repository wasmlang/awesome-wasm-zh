// Copyright 2015 ChaiShushan <chaishushan{AT}gmail.com>. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

// 当嵌入文件时, Module 对象会被先定义
// 没有嵌入文件时, Module 处于未定义状态
// 严谨的做法是根据需要创建 Module 对象

var Module;

if (typeof Module === 'undefined') Module = {};

Module.noInitialRun = true;
Module.noExitRuntime = true;
