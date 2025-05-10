project(planning_main)#定义了当前CMake项目的名称为planning_main

#告诉CMake在以下2个子目录中查找CMakeLists.txt文件，并编译其中的代码。
add_subdirectory(pnc_map)
add_subdirectory(process)

#创建了一个名为{PROJECT_NAME}的可执行文件。
#${PROJECT_NAME}在前面被定义为planning_main，
#因此这行实际上创建了名为planning_main的可执行文件。
#该可执行文件是由源文件planning_main.cpp编译而成。
add_executable(${PROJECT_NAME} planning_main.cpp)

#{PROJECT_NAME}代表planning_main。
# PUBLIC表示该包含路径对依赖于planning_main的其他目标是可见的。
# ${Process_Dir}变量在前面的代码中已经定义，指向了src/process目录。
# 因此，这行命令将src/process目录作为头文件的搜索路径添加到planning_main目标中。
target_include_directories(${PROJECT_NAME}
PUBLIC
${Process_Dir}
)

#将process库链接到planning_main可执行文件
#将process库链接到planning_main可执行文件
target_link_libraries(${PROJECT_NAME}
PUBLIC
process
)