project(show_result)

#创建了一个共享库（动态链接库），该库的名称由PROJECT_NAME变量定义，这里即process
#SHARED: 表示生成的是一个共享库（动态链接库）。如果是STATIC，则会生成静态链接库。
#show_result.cpp文件的实现将成为show_result共享库的一部分。
add_library(${PROJECT_NAME}
SHARED
show_result.cpp
)

#将src/process目录作为头文件的搜索路径添加到show_result库中
target_include_directories(${PROJECT_NAME}
PUBLIC
${Process_Dir}
)

#将process库链接到show_result库
target_link_libraries(${PROJECT_NAME}
PUBLIC
process
)

target_link_libraries(${PROJECT_NAME}
PUBLIC
easyx
)