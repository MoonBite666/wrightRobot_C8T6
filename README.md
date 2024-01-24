# WrightRobot_C8T6 “你说得对”相扑机器车电控项目代码
## 基本信息  
- 项目用于大连民族大学2024年创一工作室相扑机器人比赛
- 基于STM32F103C8T6芯片的电控程序
- 使用定时器任务来进行边缘检测和目标识别
- 使用PWM驱动电机
- 由HAL库驱动
- CubeMX生成代码，通过Makefile使能VSCode开发。使用VSCode/OpenOCD/Ozone进行程序烧录和调试
## VSCode开发流程
### Windows
> 本工程的配置参考了[湖南大学跃鹿战队basic_framework配置文档](https://gitee.com/hnuyuelurm/basic_framework/blob/master/.Doc/VSCode+Ozone%E4%BD%BF%E7%94%A8%E6%96%B9%E6%B3%95.md)，所以你也可以根据这篇文章自行配置  
- 下载安装最新VSCode，安装插件：C/C++ | Cortex-Debug | IntelliCode | Makefile Tools | stm32-for-vscode 
- 自行下载make、arm-gnu-toolchain、openocd，并将各自的bin目录设为环境变量  
参考的环境变量如下（无需全大写）：  
`G:\ARM-GNU-TOOLCHAIN-13.2.REL1-MINGW-W64-I686-ARM-NONE-EABI\BIN`  
`C:\PROGRAMDATA\CHOCOLATEY\BIN`（或者自己下载的make目录下的bin文件夹）  
`G:\OPENOCD-V0.12.0-I686-W64-MINGW32\BIN`
- clone源代码到本地，在根目录下启动VSCode。VSCode提示使用makefile进行自动配置，
点击yes即可
- 你现在可以在任意代码内随意引用HAL库。点击侧边栏上的stm32-for-vscode插件即可进行编译、烧录和调试等操作。
### Linux
施工中……
## Todo
- [] PWM电机调速
- [] 边缘检测调头算法
- [] 目标检测