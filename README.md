# WebAssembly资料精选 - 中文版

*Ending's law: "Any application that can be compiled to WebAssembly, will be compiled to WebAssembly eventually."*

*Ending定律也称为终结者定律，它是Ending在2016年Emscripten技术交流会上给出的断言：所有可以用WebAssembly实现的终将会用WebAssembly实现。*

----

**关注公众号(WASM Hackers/wasm-hackers) 或 QQ群:726475047**

![](weixin-wasm-hackers.jpg)

WASM Hackers 技术周报:

- https://github.com/chai2010/awesome-wasm-zh/blob/master/wasm-hackers-weekly.md

----

## 收录标准

- 有深度或时效性的单篇或系列非转载的原创或翻译文章
- Github上类似awesome系列的集合类或列表类项目必须：WebAssembly强相关的，至少100个star

## 其它awesome

- https://github.com/mbasso/awesome-wasm

----

## 官方参考

1. https://webassembly.org
1. https://www.w3.org/TR/wasm-core-1
1. https://www.w3.org/TR/wasm-js-api-1
1. https://github.com/WebAssembly/spec/issues
1. https://kripken.github.io/emscripten-site/index.html
1. https://developer.mozilla.org/en-US/docs/WebAssembly

规范文件:

- [WebAssembly Specification Release 1.0 (PDF)](spec/WebAssembly-v1.0.pdf)
- [Mechanising and Verifying the WebAssembly Specification(PDF)](spec/mechanising-and-verifying-the-webassembly-specification.pdf)
- [Bringing the Web up to Speed with WebAssembly(PDF)](spec/pldi2017.pdf)

## Ending定律

- https://zh.wikipedia.org/wiki/WebAssembly
- https://www.zhihu.com/question/290521651
- https://mp.weixin.qq.com/s/klv2lq-VJcHA8WPXDUtNlQ
- https://twitter.com/chaishushan/status/1029924713609363458

----

## WebAssembly图书

1. [WebAssembly标准入门](webassembly-primer.md) - 人民邮电, 即将出版
1. [C/C++面向WebAssembly编程](https://github.com/3dgen/cppwasm-book) - 开源图书, 完成50%
1. [Learn WebAssembly](https://www.packtpub.com/web-development/learn-webassembly) - 英文
1. [Programming WebAssembly with Rust](https://medium.com/@KevinHoffman/programming-webassembly-with-rust-the-book-7c4a890fcf97) - 英文, 开发中


----

## 开源实现(虚拟机 & 编译器 & 工具链)

**C/C++**

- https://github.com/LuisHsu/WasmVM
- https://github.com/AndrewScheidecker/WAVM
- https://github.com/rianhunter/wasmjit

**Go**

- http://github.com/go-interpreter/wagon
- https://github.com/perlin-network/life
- https://github.com/akupila/go-wasm
- https://github.com/tsavola/wag

----


## 编程语言

**.Net**

- https://github.com/aspnet/blazor

**AssemblyScript**

- https://github.com/AssemblyScript/assemblyscript

**C/C++/D**

- http://kripken.github.io/emscripten-site/
- https://wiki.dlang.org/Generating_WebAssembly_with_LDC
- https://github.com/rianhunter/wasmjit

**Go**

- https://github.com/golang/go/wiki/WebAssembly
- [Getting started into Go and WebAssembly](https://medium.com/@sendilkumarn/getting-started-into-go-and-webassembly-8491b133a616)
- https://tip.golang.org/pkg/syscall/js/
- https://github.com/dave/wasmgo

**Java & Kotlin**

- https://github.com/i-net-software/JWebAssembly
- https://superkotlin.com/kotlin-and-webassembly/
- https://github.com/konsoletyper/teavm

**Rust**

- https://github.com/rustwasm
- https://github.com/rustwasm/book
- [Making WebAssembly better for Rust & for all languages](https://hacks.mozilla.org/2018/03/making-webassembly-better-for-rust-for-all-languages/)

**More**

- https://github.com/appcypher/awesome-wasm-langs

----

## 黑科技


1. V8 & WebAssembly
   - Liftoff: https://v8project.blogspot.com/2018/08/liftoff.html
1. 模拟Window 2000系统:
   - https://bellard.org/jslinux/vm.html?url=https://bellard.org/jslinux/win2k.cfg&mem=192&graphic=1&w=1024&h=768
1. .NET UI framework
   - https://www.reddit.com/r/csharp/comments/98bjdu/brave_pilots_wanted_to_take_c_wpf_where_they
1. Unity3D
   - https://blogs.unity3d.com/cn/2018/08/15/webassembly-is-here/
1. Python
   - http://pypyjs.org/


## 技术文章

- [Writing a Frontend Web Framework with WebAssembly And Go](https://tutorialedge.net/golang/writing-frontend-web-framework-webassembly-go/)
- [Getting Started With Qt for WebAssembly](https://blog.qt.io/blog/2018/11/19/getting-started-qt-webassembly/)
- [WebAssembly的静态手动逆向分析](https://bbs.pediy.com/thread-247856.htm), [英文](https://www.forcepoint.com/blog/security-labs/manual-reverse-engineering-webassembly-static-code-analysis)
- [用idawasm IDA Pro逆向WebAssembly模块](https://xz.aliyun.com/t/2854), [英文](https://www.fireeye.com/blog/threat-research/2018/10/reverse-engineering-webassembly-modules-using-the-idawasm-ida-pro-plugin.html)
- [Go and wasm: generating and executing wasm with Go](https://blog.gopheracademy.com/advent-2017/go-wasm/)
- [为什么我们相信 Wasm 可用作分布式应用开发的基础层](https://ethfans.org/posts/wasm-smart-contract-development)
- [I ported my Gameboy Color emulator to WebAssembly](https://djhworld.github.io/post/2018/09/21/i-ported-my-gameboy-color-emulator-to-webassembly/)
- [WebAssembly Cephes – Mathematical special functions in JavaScript](https://www.nearform.com/blog/webassembly-cephes/)
- [Go WebAssembly — Building a Calculator Tutorial](https://hackernoon.com/go-webassembly-building-a-calculator-tutorial-70fff89db6a9)
- [Go 1.11: WebAssembly for the gophers](https://medium.zenika.com/go-1-11-webassembly-for-the-gophers-ae4bb8b1ee03)
- [Go1.11和WebAssembly](https://mp.weixin.qq.com/s/jqISsdQ9tDzy9Zg6g6u5xw)
- [WebAssembly: How and why](https://blog.logrocket.com/webassembly-how-and-why-559b7f96cd71)
- [Getting started into Go and WebAssembly](https://medium.com/@sendilkumarn/getting-started-into-go-and-webassembly-8491b133a616)
- [Ray Tracing: WebAssembly vs JavaScript](http://matt-harrison.com/raytracing-webassembly-vs-javascript/)
- [The future of WebAssembly](https://blog.scottlogic.com/2018/07/20/wasm-future.html)
- [Life: A secure, blazing-fast, cross-platform WebAssembly VM in Go](https://medium.com/perlin-network/life-a-secure-blazing-fast-cross-platform-webassembly-vm-in-go-ea3b31fa6e09)
- [Haxe, WebAssembly, TypeScript, Dart performance benchmark](https://github.com/damoebius/HaxeBench)
- [Vim Wasm – Vim Editor Ported To WebAssembly](https://kalilinuxtutorials.com/vim-wasm-vim-editor/)


## 其它

- [Try C/TypeScript/Rust in Browser](https://wasm.fastlylabs.com/)
- [Oak - The Go WebAssembly Framework](https://github.com/elliotforbes/oak)
- [Z80反汇编器](https://floooh.github.io/tiny8bit/kc85-ui.html?type=kc85_4)

