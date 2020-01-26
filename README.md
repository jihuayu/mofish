# mofish
![CMake Build Matrix](https://github.com/mofishes/mofish/workflows/CMake%20Build%20Matrix/badge.svg?event=push)
[![Codacy Badge](https://api.codacy.com/project/badge/Grade/3613a64cd63f45a3b6a887d5511199d4)](https://www.codacy.com/gh/mofishes/mofish?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=mofishes/mofish&amp;utm_campaign=Badge_Grade)

一个用来构建命令行程序的库。

## 测试

如果要开启测试功能，请设置环境变量`MOFISH_TEST`。

## 文件结构

- test:放测试文件，测试目录。
- src:主目录
- main.cpp:cli主函数，只写cli逻辑。