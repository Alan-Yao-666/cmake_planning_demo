project(process)

#创建了一个共享库（动态链接库），该库的名称由PROJECT_NAME变量定义，这里即process
#SHARED: 表示生成的是一个共享库（动态链接库）。如果是STATIC，则会生成静态链接库。
#process.cpp文件的实现将成为process共享库的一部分。
add_library(${PROJECT_NAME}
SHARED
process.cpp
)

#将src/pnc_map目录作为头文件的搜索路径添加到process库中
target_include_directories(${PROJECT_NAME}
PUBLIC
${PNC_Map_Dir}
)

#将pnc_map库链接到process库
target_link_libraries(${PROJECT_NAME}
PUBLIC
pnc_map
)
#将Eigen3::Eigen库链接到process库
target_link_libraries(${PROJECT_NAME}
PUBLIC
Eigen3::Eigen
)