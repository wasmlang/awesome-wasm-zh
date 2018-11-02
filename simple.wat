;; Copyright 2016 <chaishushan{AT}gmail.com>. All rights reserved.
;; Use of this source code is governed by a BSD-style
;; license that can be found in the LICENSE file.

(module
	(export "addTwo" (func $addTwo))
	(export "addTwo2" (func $addTwo2))

	(import "console" "log" (func $log (param i32)))

	(func $addTwo (param i32 i32) (result i32)
		i32.const 9527
		call $log

		get_local 0
		get_local 1
		i32.add
	)

	(func $addTwo2 (param i32 i32) (result i32)
		get_local 0
		get_local 1
		i32.add
	)
)
