cmake_minimum_required(VERSION 3.29.0)
project(planning
    VERSION 0.0.1
    DESCRIPTION "a demo of cmake planning"
    HOMEPAGE_URL "https://github.com/Alan-Yao-666/cmake_planning_demo"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)

#变量和目录设置
#将生成的可执行文件（planning_main.exe）和动态库（pnc_map和process）
#放在项目根目录(CMAKE_PLANNING_DEMO)下的bin文件夹中
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)#动态库和exe文件都指定到bin目录下面
#定义变量：Process_Dir指向项目根目录下的src/process目录，PNC_Map_Dir指向项目根目录下的src/pnc_map目录。
set(Process_Dir ${CMAKE_SOURCE_DIR}/src/process)
set(PNC_Map_Dir ${CMAKE_SOURCE_DIR}/src/pnc_map)
set(Show_Result_Dir ${CMAKE_SOURCE_DIR}/src/show_result)

#三方库
set(EIGEN3_INCLUDE_DIR "e:/vscode_new/eigen-3.4.0/eigen-3.4.0")
list(APPEND CMAKE_MODULE_PATH "${EIGEN3_INCLUDE_DIR}/cmake")
message("CMAKE_MODULE_PATH=${CMAKE_MODULE_PATH}")

find_package(Eigen3 3.4 REQUIRED)
if(TARGET Eigen3::Eigen)
message(STATUS "*******Eigen3 3.4 found in ${EIGEN3_INCLUDE_DIR}******")
endif()

#添加子目录
add_subdirectory(src)#告诉CMake在src子目录中查找CMakeLists.txt文件，并编译其中的代码。


