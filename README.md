# mofish
[![build](![build](https://github.com/mofishes/mofish/workflows/build/badge.svg?event=push))](https://github.com/mofishes/mofish/actions)
[![Codacy Badge](https://api.codacy.com/project/badge/Grade/3613a64cd63f45a3b6a887d5511199d4)](https://www.codacy.com/gh/mofishes/mofish?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=mofishes/mofish&amp;utm_campaign=Badge_Grade)

一个用来构建/管理命令行程序的工具。

## 测试

如果要开启测试功能，请设置环境变量`MOFISH_TEST`。

## 文件结构

-   test/：放测试文件，测试目录。
-   src/：代码主目录。
-   main.cpp：cli主函数，只写cli逻辑。

## 安装方法

-   使用mofish_install.（WIP）
-   clone本项目自行编译.
-   在release中下载特定版本。

## 使用方法

-   mofish install <port>
-   mofish remove <port>
-   mofish list
-   mofish help

当然，以上功能一个都没实现。

## 贡献插件

1.  fork本仓库。
2.  在ports文件中新建一个以插件名字命名的文件夹。
3.  按照样例写好配置文档。
4.  发送PR。
5.  测试通过，即可合并。

当然，以上功能一个都没实现。

## 贡献文档

欢迎贡献文档。

## 贡献代码

欢迎贡献文档。
