// Copyright 2016 <chaishushan{AT}gmail.com>. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

const fs = require('fs');
const buf = fs.readFileSync('./simple.wasm');

WebAssembly.instantiate(new Uint8Array(buf),{
	console: {
	  log: function(arg) {
		console.log(arg);
	  }
	}
  }).then(function(result) {
	console.log(result.instance.exports.addTwo(1, 2))
})
