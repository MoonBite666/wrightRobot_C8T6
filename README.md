# WrightRobot_C8T6 “你说得对”相扑机器车电控项目代码

## 基本信息  

- 项目用于大连民族大学2024年创一工作室相扑机器人比赛
- 基于STM32F103C8T6芯片的电控程序
- 使用定时器任务来进行边缘检测和目标识别
- 使用PWM驱动电机
- 由HAL库驱动
- CubeMX生成代码，通过Makefile使能VSCode开发。使用VSCode/OpenOCD/Ozone进行程序烧录和调试

## 开发流程1——VSCode编译与烧录

> 本工程的配置参考了[湖南大学跃鹿战队basic_framework配置文档](https://gitee.com/hnuyuelurm/basic_framework/blob/master/.Doc/VSCode+Ozone%E4%BD%BF%E7%94%A8%E6%96%B9%E6%B3%95.md)，所以你也可以根据这篇文章自行配置  

### Windows

1. 下载安装最新VSCode，安装插件：C/C++ | Cortex-Debug | IntelliCode | Makefile Tools | stm32-for-vscode
2. 自行下载make、arm-gnu-toolchain、openocd，并将各自的bin目录设为环境变量  
参考的环境变量如下（无需全大写）：  
`G:\ARM-GNU-TOOLCHAIN-13.2.REL1-MINGW-W64-I686-ARM-NONE-EABI\BIN`  
`C:\PROGRAMDATA\CHOCOLATEY\BIN`（或者自己下载的make目录下的bin文件夹）  
`G:\OPENOCD-V0.12.0-I686-W64-MINGW32\BIN`
3. clone源代码到本地，在根目录下启动VSCode。VSCode提示使用makefile进行自动配置，
点击yes即可
4. 你现在可以在任意代码内随意引用HAL库。点击侧边栏上的stm32-for-vscode插件即可进行编译、烧录等操作。若需要更换仿真器，使用"Change programmer"功能即可

### Linux

1. 下载安装最新VSCode，安装插件：C/C++ | Cortex-Debug | IntelliCode | Makefile Tools，在文件夹中打开VSCode即可通过Makefile自动配置工程
2. 使用包管理器安装make、openocd
3. 在VSCode的任务（Task）中执行编译/烧录。若需要更换仿真器，请更改根目录下openocd.cfg的内容：

`source [find interface/<input your debugger>.cfg]`

## 开发流程2——调试

### Windows下调试

- 直接使用VSCode中的stm32-for-vscode工具自带的“Debug STM32”
- 你也可以参考[湖南大学跃鹿战队basic_framework配置文档](https://gitee.com/hnuyuelurm/basic_framework/blob/master/.Doc/VSCode+Ozone%E4%BD%BF%E7%94%A8%E6%96%B9%E6%B3%95.md)，使用Ozone进行调试。文件夹根目录中已经附带Ozone的.jbebug工程文件，默认使用DAP-Link连接

### Linux下调试

以Ubuntu 22.04系统举例：

1. 下载[arm-none-eabi-dbg](http://drive.mflink.top/d/storage1/Aliyun/arm-none-eabi-gdb)，将其放入/usr/bin中
2. 安装python3.8。由于这是一个过时版本的python，你无法在apt中直接下载到它。你或许可以参考[这篇文章](https://www.cnblogs.com/jsxubar/p/17622352.html)
3. 运行VSCode中F5 Debug菜单中的“Linux STM Debug”任务

## 程序数据流

![c8t6flow](https://pic.imgdb.cn/item/65b9e888871b83018ac72d60.jpg)

## Todo

- [] PWM电机调速
- [] 边缘检测调头算法
- [x] 目标检测
- [] PID算法
