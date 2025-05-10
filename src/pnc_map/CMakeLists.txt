project(pnc_map)

#创建了一个共享库（动态链接库），该库的名称由PROJECT_NAME变量定义，这里即pnc_map
#SHARED: 表示生成的是一个共享库（动态链接库）。如果是STATIC，则会生成静态链接库
#pnc_map.cpp文件的实现将成为pnc_map共享库的一部分。
add_library(${PROJECT_NAME}
SHARED
pnc_map.cpp
)