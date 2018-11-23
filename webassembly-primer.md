# WebAssembly标准入门

本书讲解了WebAssembly的基础知识，其内容涵盖了WASM的历史背景、WASM中汇编语言和虚拟机指令、浏览器对WASM的支持、其它高级语言对WASM的支持等。本书适合想要掌握WebAssembly技术的用户学习。

![](webassembly-primer-cover.png)

- 作者：[柴树杉(chai2010)](https://github.com/chai2010)，[丁尔男(Ending)](https://github.com/3dgen)

---

## 目录

* 第0章 WebAssembly是什么
* 第1章 JavaScript基础
  * 1.1 JavaScript简史
  * 1.2 ASM.js的尝试
  * 1.3 WebAssembly的救赎
  * 1.4 console模块
  * 1.5 函数和闭包
  * 1.6 Promise对象
  * 1.7 二进制数组
* 第2章 WebAssembly快速入门
  * 2.1 准备工作
  * 2.2 首个例程
  * 2.3 WebAssembly概览
  * 2.4 你好，WebAssembly
  * 2.5 WebAssembly调试及其他
* 第3章 JavaScript中的WebAssembly对象
  * 3.1 WebAssembly对象简介
  * 3.2 全局方法
  * 3.3 Module对象
  * 3.4 Instance对象
  * 3.5 Memory对象
  * 3.6 Table对象
  * 3.7 小结及错误类型
* 第4章 WebAssembly汇编语言
  * 4.1 S-表达式
  * 4.2 数据类型
  * 4.3 函数定义
  * 4.4 变量
  * 4.5 栈式虚拟机
  * 4.6 函数调用
  * 4.7 内存读写
  * 4.8 控制流
  * 4.9 导入和导出
  * 4.10 start及指令折叠
* 第5章 二进制格式
  * 5.1 LEB128编码
  * 5.2 数据容器结构
  * 5.3 头部和段数据
  * 5.4 类型段、函数段和代码段
  * 5.5 内存和Table段
  * 5.6 导入和导出段
  * 5.7 调试信息段
  * 5.8 补充说明
* 第6章 Emscripten
  * 6.1 安装环境
  * 6.2 你好，Emscripten！
  * 6.3 C/C++内联JavaScript代码
  * 6.4 C/C++调用JavaScript函数
  * 6.5 JS调用C导出函数
  * 6.6 运行时和消息循环
  * 6.7 补充说明
* 第7章 Go语言
  * 7.1 你好，Go语言
  * 7.2 浏览器中的Go语言
  * 7.3 使用JavaScript函数
  * 7.4 回调Go函数
  * 7.5 syscall/js包
  * 7.6 WebAssembly虚拟机
  * 7.7 补充说明
* 附录A：指令参考
* 附录B：参考文献
